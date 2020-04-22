//
// Created by Prodigy on 19.04.2020.
//

#include "armprocessor/instructions/Instruction.h"
#include "armprocessor/processor.h"

void Instruction::execute(Processor* p) {
    switch (cond) {
        case EQ:
            if (p->cpsr->Z) break;
            else return;
        case NE:
            if (!p->cpsr->Z) break;
            else return;
        case CS:
            if (p->cpsr->C) break;
            else return;
        case CC:
            if (!p->cpsr->C) break;
            else return;
        case MI:
            if (p->cpsr->N) break;
            else return;
        case PL:
            if (!p->cpsr->N) break;
            else return;
        case VS:
            if (p->cpsr->V) break;
            else return;
        case VC:
            if (!p->cpsr->V) break;
            else return;
        case HI:
            if (p->cpsr->V && (!p->cpsr->Z)) break;
            else return;
        case LS:
            if ((!p->cpsr->V) || p->cpsr->Z) break;
            else return;
        case GE:
            if (p->cpsr->N == p->cpsr->V) break;
            else return;
        case LT:
            if (p->cpsr->N != p->cpsr->V) break;
            else return;
        case GT:
            if ((!p->cpsr->Z) && (p->cpsr->N == p->cpsr->V)) break;
            else return;
        case LE:
            if ((p->cpsr->Z) || (p->cpsr->N != p->cpsr->V)) break;
            else return;
        case AL:
            break;
        default:
            return;
    }
    routine(p);
};

namespace Set {
    Instruction moveOp(Opcode op, Condition cond, bool updateFlags, unsigned int rd, const ShiftOperand &rm, SourceLocation sl,
                std::string spelling) {
        Routine f = [op, updateFlags, rd, rm, sl](Processor *p) {
            p->alu->updateFlags = updateFlags;
            unsigned int op2 = rm.operator()(p);
            switch (op) {
                case MOV:
                    p->regs[rd] = op2;
                    break;
                case MVN:
                    p->regs[rd] = ~op2;
                    break;
                default:
                    p->errors.emplace_back("Error at moveOp in Instruction.h unsupported instruction", sl);
                    return;
            }
        };
        Instruction instruction(cond, f, sl, std::move(spelling));
        return instruction;
    };

    Instruction compareOp(Opcode op, Condition cond, unsigned int rn, const ShiftOperand &rm, SourceLocation sl,
                               std::string spelling) {
        Routine f = [op, rn, rm, sl](Processor *p) {
            p->alu->updateFlags = true;
            unsigned int op2 = rm.operator()(p);
            switch (op) {
                case CMP:
                    p->alu->calcU(SUB, p->regs[rn], op2);
                    break;
                case CMN:
                    p->alu->calcU(ADD, p->regs[rn], op2);
                    break;
                case TST:
                    p->alu->calcU(AND, p->regs[rn], op2);
                    break;
                case TEQ:
                    p->alu->calcU(XOR, p->regs[rn], op2);
                    break;
                default:
                    p->errors.emplace_back("Error at compareOp in Instruction.h unsupported instruction", sl);
                    return;
            }
        };

        Instruction instruction(cond, f, sl, std::move(spelling));
        return instruction;
    }

    namespace shifter{
        ShiftOperand immediate(unsigned int imm){
            return (ShiftOperand)[imm](Processor* /*unused*/){return imm;};
        }
        ShiftOperand reg(unsigned int index){
            return (ShiftOperand)[index](Processor* p){
                return index >= 0 && index < 16 ? p->regs[index] : -1;
            };
        }
        ShiftOperand inlineShift(unsigned int index,Aluops shiftop,unsigned val){
            return (ShiftOperand)[index,shiftop,val](Processor* p){
                unsigned int a = index < 16 ? p->regs[index] : -1;
                return p->alu->calcU(shiftop,a,val);
            };
        }
        ShiftOperand inlineShiftReg(unsigned int index,Aluops shiftop,unsigned int val){
            return (ShiftOperand)[index,shiftop,val](Processor* p){
                unsigned int a = index < 16 ? p->regs[index] : -1;
                unsigned int b = index < 16 ? p->regs[val] : -1;
                return p->alu->calcU(shiftop,a,b);
            };
        }
    }
}
