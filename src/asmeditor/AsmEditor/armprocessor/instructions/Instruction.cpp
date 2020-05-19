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
                    p->alu->calcU(Aluops::SUB, p->regs[rn], op2);
                    break;
                case CMN:
                    p->alu->calcU(Aluops::ADD, p->regs[rn], op2);
                    break;
                case TST:
                    p->alu->calcU(Aluops::AND, p->regs[rn], op2);
                    break;
                case TEQ:
                    p->alu->calcU(Aluops::XOR, p->regs[rn], op2);
                    break;
                default:
                    p->errors.emplace_back("Error at compareOp in Instruction.h unsupported instruction", sl);
                    return;
            }
        };

        Instruction instruction(cond, f, sl, std::move(spelling));
        return instruction;
    }

    Instruction arithmeticOp(Opcode op, Condition cond, bool updateFlags, unsigned int rd,unsigned int rn, const ShiftOperand &rm, SourceLocation sl,
                       std::string spelling) {
        Routine f = [op, updateFlags, rd,rn, rm, sl](Processor *p) {
            p->alu->updateFlags = updateFlags;
            unsigned int op2 = rm.operator()(p);
            unsigned int res = 0;
            switch (op) {
            case ADD:
                res = p->alu->calcU(Aluops::ADD,p->regs[rn],op2);
                break;
            case SUB:
                res = p->alu->calcU(Aluops::SUB,p->regs[rn],op2);
                break;
            case RSB:
                res = p->alu->calcU(Aluops::SUB,op2,p->regs[rn]);
                break;
            case ADC:
                res = p->alu->calcU(Aluops::ADC,p->regs[rn],op2);
                break;
            case SBC:
                res = p->alu->calcU(Aluops::SBC,p->regs[rn],op2);
                break;
            case RSC:
                res = p->alu->calcU(Aluops::SBC,op2,p->regs[rn]);
                break;
            case AND:
                res = p->alu->calcU(Aluops::AND,p->regs[rn],op2);
                break;
            case BIC:
                res = p->alu->calcU(Aluops::BIC,p->regs[rn],op2);
                break;
            case EOR:
                res = p->alu->calcU(Aluops::XOR,p->regs[rn],op2);
                break;
            case ORR:
                res = p->alu->calcU(Aluops::OR,p->regs[rn],op2);
                break;
            default:
                p->errors.emplace_back("Error at arithmeticOp in Instruction.h unsupported instruction", sl);
                return;
            }

            p->regs[rd] = res;
        };
        Instruction instruction(cond, f, sl, std::move(spelling));
        return instruction;
    };

    Instruction normalMultiply(Condition cond,bool updateFlags,unsigned int rd,unsigned int rn,unsigned int rm,SourceLocation sl,
                               std::string spelling){
        Routine f = [updateFlags, rd,rn, rm, sl](Processor *p) {
            p->alu->updateFlags = updateFlags;
            unsigned int res = p->alu->calcU(Aluops::MUL,p->regs[rn],p->regs[rm]);

            p->regs[rd] = res;
        };
        Instruction instruction(cond, f, sl, std::move(spelling));
        return instruction;
    }

    Instruction branchToLabel(Opcode op, Condition cond,std::string label, SourceLocation sl,
                              std::string spelling)
    {
        Routine f = [op,label,sl](Processor *p){
            if(p->labels.find(label)==p->labels.end())
            {
                 p->errors.emplace_back("The label "+label+" was not found in your code!", sl);
                 return;
            }
            unsigned int dest = p->labels.at(label);
            switch(op){
            case B:
                    p->regs[15] = dest;
                    break;
            case BL:
                    p->regs[14] = p->regs[15];
                    p->regs[15] = dest;
                    break;
            default:
                p->errors.emplace_back("Error at branchToLabel in Instruction.h unsupported instruction", sl);
                return;
            }
        };
        Instruction instruction(cond, f, sl, std::move(spelling));
        return instruction;
    }

    Instruction branchToRegister(Opcode op, Condition cond,unsigned int rd, SourceLocation sl,std::string spelling){
        Routine f = [rd](Processor *p){
            unsigned int dest = p->regs[rd];
            if(rd == 14&&dest==0)
                p->isDone = true;
            p->regs[14] = p->regs[15];
            p->regs[15] = dest;
        };
        Instruction instruction(cond, f, sl, std::move(spelling));
        return instruction;
    }

    Instruction labelLoadStore(Opcode op,Condition cond,unsigned int rd,std::string label, SourceLocation sl,std::string spelling){
        Routine f = [op,rd,label,sl](Processor *p){
            if(op == Opcode::LDR){
                if(p->dataToAddress.find(label)==p->dataToAddress.end())
                {
                    p->errors.emplace_back("No variable in data found with name: "+label,sl);
                    return;
                }
                unsigned int address = p->dataToAddress.at(label);
                if(address>=MEMSIZE||address < 0){
                    p->errors.emplace_back("Error at label load instruction in Instruction.h adress out of bounds", sl);
                    return;
                }
                p->regs[rd] = p->memory[address];
            }
        };
        Instruction instruction(cond, f,sl,std::move(spelling));
        return instruction;
    }

    Instruction loadStore(Opcode op,Condition cond,TypeCondition typeCond,bool privilege,unsigned int rd,AddressingOperand addop, SourceLocation sl,std::string spelling){
        Routine f = [op,rd,addop,sl](Processor *p){
            if(op == Opcode::LDR){
                unsigned int address = addop.operator()(p);
                unsigned int tmp = address/4;
                if(tmp>=MEMSIZE||tmp < 0){
                    p->errors.emplace_back("Error at load instruction in Instruction.h adress out of bounds", sl);
                    return;
                }
                p->regs[rd] = p->memory[tmp];
            }
            else if(op == Opcode::STR){
                unsigned int address = addop.operator()(p);
                unsigned int tmp = address/4;
                if(tmp>=MEMSIZE||tmp < 0){
                    p->errors.emplace_back("Error at load instruction in Instruction.h adress out of bounds", sl);
                    return;
                }
                p->memory[tmp] = p->regs[rd];
            }
        };
        Instruction instruction(cond, f,sl,std::move(spelling));
        return instruction;
    }

    Instruction pushMakro(std::vector<unsigned int> regs, SourceLocation sl,std::string spelling){
        Routine f = [regs,sl](Processor *p){
            unsigned int sp = p->regs[13]/4;
            for(int i = 0; i < (int)regs.size();i++)
            {
                unsigned int rd = regs.at(regs.size()-i-1);
                unsigned int addr = --sp;
                if(addr < 0 || addr >= MEMSIZE/2)
                {
                    p->errors.emplace_back("Stack adress out of range",sl);
                    return -1;
                }
                p->memory[addr]=p->regs[rd];
            }
            p->regs[13] = sp*4;
        };
        Instruction instruction(AL, f,sl,std::move(spelling));
        return instruction;
    }

    Instruction popMakro(std::vector<unsigned int> regs, SourceLocation sl,std::string spelling){
        Routine f = [regs,sl](Processor *p){
            unsigned int sp = p->regs[13]/4;
            for(int i = 0; i < (int)regs.size();i++)
            {
                unsigned int addr = sp++;
                if(addr < 0 || addr >= MEMSIZE/2)
                {
                    p->errors.emplace_back("Stack adress out of range",sl);
                    return -1;
                }
                unsigned int val = p->memory[addr];
                unsigned int rd = regs.at(i);
                p->regs[rd] = val;
            }
            p->regs[13] = sp*4;
        };
        Instruction instruction(AL, f,sl,std::move(spelling));
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

    namespace addressing{
        AddressingOperand normal(unsigned int rn,ShiftOperand shift){
            return (AddressingOperand)[rn,shift](Processor* p){
                unsigned int op2 = 0;
                if(shift)
                    op2 = shift.operator()(p);
                unsigned addr = p->regs[rn] + op2;
                return addr;
            };
        }
        AddressingOperand preUpdate(unsigned int rn,ShiftOperand shift){
            return (AddressingOperand)[rn,shift](Processor* p){
                unsigned int op2 = 0;
                if(shift)
                    op2 = shift.operator()(p);
                unsigned addr = p->regs[rn] + op2;
                p->regs[rn] = addr;
                return addr;
            };
        }
        AddressingOperand postUpdate(unsigned int rn,ShiftOperand shift){
            return (AddressingOperand)[rn,shift](Processor* p){
                unsigned int op2 = 0;
                if(shift)
                    op2 = shift.operator()(p);
                unsigned addr = p->regs[rn];
                p->regs[rn] += op2;
                return addr;
            };
        }
    }
}
