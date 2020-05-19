//
// Created by Prodigy on 17.04.2020.
//

#include "CommandVisitor.h"
#include <functional>
#include <iostream>
SourceLocation toSL(antlr4::ParserRuleContext* ctx){
    return SourceLocation(ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine(),ctx->getStop()->getLine(),ctx->getStop()->getCharPositionInLine());
}

/*=========================
 *
 *      Sections
 *
 * ========================
 */
antlrcpp::Any CommandVisitor::visitGlobalSection(assembler::ARMParser::GlobalSectionContext *ctx){
    if(ctx->LABELREF())
    {
        this->startLabel = ctx->LABELREF()->getText();
    }else
        return -1;
    return 0;
}

/*=========================
 *
 *      Data processing
 *
 * ========================
 */

antlrcpp::Any CommandVisitor::visitMoveOp(assembler::ARMParser::MoveOpContext *ctx){
    Condition cond = Condition::AL;
    if(ctx->cond())
        cond = CommandVisitor::visit(ctx->cond()).as<Condition>();

    bool updateFlag = ctx->UPDATEFLAG()!=nullptr;
    Set::Opcode opcode;
    if(ctx->MOV())
        opcode = Set::Opcode::MOV;
    else
        opcode = Set::Opcode::MVN;

    if(!ctx->reg())
        return -1;
    if(!ctx->shifter_operand())
        return -1;

    unsigned int rd = CommandVisitor::visitReg(ctx->reg());
    if(rd == 16)
        return -1;

    antlrcpp::Any test = CommandVisitor::visit(ctx->shifter_operand());
    if(!test.is<ShiftOperand>())
        return -1;
    ShiftOperand op2 = test.as<ShiftOperand>();
    Instruction inst = Set::moveOp(opcode,cond,updateFlag,rd,op2,toSL(ctx),ctx->getText());
    program.push_back(inst);
    return inst;
}

antlrcpp::Any CommandVisitor::visitCompareOp(assembler::ARMParser::CompareOpContext *ctx){
    Condition cond = Condition::AL;
    if(ctx->cond())
        cond = CommandVisitor::visit(ctx->cond()).as<Condition>();

    Set::Opcode opcode;
    if(ctx->CMP())
        opcode = Set::Opcode::CMP;
    else if (ctx->CMN())
        opcode = Set::Opcode::CMN;
    else if (ctx->TST())
        opcode = Set::Opcode::TST;
    else if (ctx->TEQ())
        opcode = Set::Opcode::TEQ;

    if(!ctx->reg())
        return -1;
    if(!ctx->shifter_operand())
        return -1;

    unsigned int rd = CommandVisitor::visitReg(ctx->reg());
    if(rd == 16)
        return -1;

    antlrcpp::Any test = CommandVisitor::visit(ctx->shifter_operand());
    if(!test.is<ShiftOperand>())
        return -1;
    ShiftOperand op2 = test.as<ShiftOperand>();
    Instruction inst = Set::compareOp(opcode,cond,rd,op2,toSL(ctx),ctx->getText());

    program.push_back(inst);
    return inst;
}

antlrcpp::Any CommandVisitor::visitArithmeticOp(assembler::ARMParser::ArithmeticOpContext *ctx){
    Condition cond = Condition::AL;
    if(ctx->cond())
        cond = CommandVisitor::visit(ctx->cond()).as<Condition>();

    bool updateFlag = ctx->UPDATEFLAG()!=nullptr;
    Set::Opcode opcode;
    if(ctx->ADD())
        opcode = Set::Opcode::ADD;
    else if (ctx->SUB())
        opcode = Set::Opcode::SUB;
    else if (ctx->RSB())
        opcode = Set::Opcode::RSB;
    else if (ctx->ADC())
        opcode = Set::Opcode::ADC;
    else if (ctx->SBC())
        opcode = Set::Opcode::SBC;
    else if (ctx->RSC())
        opcode = Set::Opcode::RSC;
    else if (ctx->AND())
        opcode = Set::Opcode::AND;
    else if (ctx->BIC())
        opcode = Set::Opcode::BIC;
    else if (ctx->EOR())
        opcode = Set::Opcode::EOR;
    else if (ctx->ORR())
        opcode = Set::Opcode::ORR;

    if(!ctx->reg().at(0))
        return -1;
    if(!ctx->reg().at(1))
        return -1;
    if(!ctx->shifter_operand())
        return -1;


    unsigned int rd = CommandVisitor::visitReg(ctx->reg().at(0));
    if(rd == 16)
        return -1;
    unsigned int rn = CommandVisitor::visitReg(ctx->reg().at(1));
    if(rd == 16)
        return -1;

    antlrcpp::Any test = CommandVisitor::visit(ctx->shifter_operand());
    if(!test.is<ShiftOperand>())
        return -1;
    ShiftOperand op2 = test.as<ShiftOperand>();
    Instruction inst = Set::arithmeticOp(opcode,cond,updateFlag,rd,rn,op2,toSL(ctx),ctx->getText());

    program.push_back(inst);
    return inst;
}


/*==================
 *
 *  Branch Operation
 *
 ===================*/
antlrcpp::Any CommandVisitor::visitBranchToLabel(assembler::ARMParser::BranchToLabelContext *ctx){
    Condition cond = Condition::AL;
    if(ctx->cond())
        cond = CommandVisitor::visit(ctx->cond()).as<Condition>();
    Set::Opcode opcode;
    if(ctx->FB())
        opcode = Set::Opcode::B;
    else
        return -1;
    if (ctx->LINK())
        opcode = Set::Opcode::BL;


    if(!ctx->LABELREF())
        return -1;

    std::string label = ctx->LABELREF()->getText();
    Instruction inst = Set::branchToLabel(opcode,cond,label,toSL(ctx),ctx->getText());
    program.push_back(inst);
    return inst;
}


antlrcpp::Any CommandVisitor::visitBranchToRegister(assembler::ARMParser::BranchToRegisterContext *ctx){
    Condition cond = Condition::AL;
    if(ctx->cond())
        cond = CommandVisitor::visit(ctx->cond()).as<Condition>();

    if(!ctx->reg())
        return -1;

    unsigned int rd = CommandVisitor::visitReg(ctx->reg());
    if(rd == 16)
        return -1;

    Instruction inst = Set::branchToRegister(Set::Opcode::BX,cond,rd,toSL(ctx),ctx->getText());
    program.push_back(inst);
    return inst;
}


/*==================
 *
 *  load and store
 *
 ===================*/

antlrcpp::Any CommandVisitor::visitFirstLoadStore(assembler::ARMParser::FirstLoadStoreContext *ctx){
    Condition cond = Condition::AL;
    if(ctx->cond())
        cond = CommandVisitor::visit(ctx->cond()).as<Condition>();

    Set::Opcode opcode;
    if(ctx->LDR())
        opcode = Set::Opcode::LDR;
    else
        opcode = Set::Opcode::STR;

    if(!ctx->reg())
        return -1;

    unsigned int rd = CommandVisitor::visitReg(ctx->reg());
    if(rd == 16)
        return -1;

    if(!ctx->LABELREF())
        return -1;
    std::string label = ctx->LABELREF()->getText();
    Instruction inst = Set::labelLoadStore(opcode,cond,rd,label,toSL(ctx),ctx->getText());
    program.push_back(inst);
    return inst;
}

antlrcpp::Any CommandVisitor::visitSecondLoadStore(assembler::ARMParser::SecondLoadStoreContext *ctx){
    //std::cout << "secondLoadStore" << std::endl;
    Condition cond = Condition::AL;
    if(ctx->cond())
        cond = CommandVisitor::visit(ctx->cond()).as<Condition>();

    Set::Opcode opcode;
    if(ctx->LDR())
        opcode = Set::Opcode::LDR;
    else
        opcode = Set::Opcode::STR;

    TypeCondition tc = NORMAL;

    if(ctx->DOUBLEWORD()){
        tc = DOUBLEWORD;
    }else if(ctx->HALFWORD()){
        tc = HALFWORD;
    }else if(ctx->SIGNEDHALFWORD()){
        tc = SHALFWORD;
    }else if(ctx->SIGNEDBYTE()){
        tc = SBYTE;
    }else if(ctx->FB()){
        tc = BYTE;
    }

    //yeah this can be shorter but this is fine too
    bool privilege = false;
    if(ctx->PRIVILEGE())
        privilege = true;

    if(!ctx->reg())
        return -1;

    unsigned int rd = CommandVisitor::visitReg(ctx->reg());
    if(rd == 16)
        return -1;

    antlrcpp::Any test = CommandVisitor::visit(ctx->addressing_mode());
    if(!test.is<AddressingOperand>())
        return -1;
    AddressingOperand addm = test.as<AddressingOperand>();

    Instruction inst = Set::loadStore(opcode,cond,tc,privilege,rd,addm,toSL(ctx),ctx->getText());
    program.push_back(inst);
    return inst;
}
antlrcpp::Any CommandVisitor::visitPushPopMakro(assembler::ARMParser::PushPopMakroContext *ctx){
    std::vector<unsigned int> regs;
    std::cout << "PUSHPOP:" << ctx->reg().size() << std::endl;
    for(int i = 0; i < (int) ctx->reg().size(); i++){
        std::cout << i << std::endl;
        if(ctx->reg().at(i))
        {
            unsigned int val = visit(ctx->reg().at(i));
            std::cout << val << std::endl;
            regs.push_back(val);
        }
    }

    if(ctx->PUSH()){
        Instruction inst = Set::pushMakro(regs,toSL(ctx),ctx->getText());
        program.push_back(inst);
        return inst;
    }else if(ctx->POP())
    {
        Instruction inst = Set::popMakro(regs,toSL(ctx),ctx->getText());
        program.push_back(inst);
        return inst;
    }
}

antlrcpp::Any CommandVisitor::visitNormalAddressing(assembler::ARMParser::NormalAddressingContext *ctx){
    unsigned int rn = CommandVisitor::visitReg(ctx->reg());
    if(rn == 16)
        return -1;
    if(!ctx->shifter_operand())
        return Set::addressing::normal(rn,0);

    antlrcpp::Any test = CommandVisitor::visit(ctx->shifter_operand());
    if(!test.is<ShiftOperand>())
        return -1;
    ShiftOperand op2 = test.as<ShiftOperand>();

    return Set::addressing::normal(rn,op2);
}
antlrcpp::Any CommandVisitor::visitPreIndexedAddressing(assembler::ARMParser::PreIndexedAddressingContext *ctx){
    unsigned int rn = CommandVisitor::visitReg(ctx->reg());
    if(rn == 16)
        return -1;
    if(!ctx->shifter_operand())
        return Set::addressing::preUpdate(rn,0);

    antlrcpp::Any test = CommandVisitor::visit(ctx->shifter_operand());
    if(!test.is<ShiftOperand>())
        return -1;
    ShiftOperand op2 = test.as<ShiftOperand>();

    return Set::addressing::preUpdate(rn,op2);
}
antlrcpp::Any CommandVisitor::visitPostIndexedAddressing(assembler::ARMParser::PostIndexedAddressingContext *ctx){
    unsigned int rn = CommandVisitor::visitReg(ctx->reg());
    if(rn == 16)
        return -1;
    if(!ctx->shifter_operand())
        return Set::addressing::postUpdate(rn,0);

    antlrcpp::Any test = CommandVisitor::visit(ctx->shifter_operand());
    if(!test.is<ShiftOperand>())
        return -1;
    ShiftOperand op2 = test.as<ShiftOperand>();

    return Set::addressing::postUpdate(rn,op2);
}


/*==================
 *
 *  Shift operand
 *
 ===================*/

antlrcpp::Any CommandVisitor::visitOp2immediate(assembler::ARMParser::Op2immediateContext *ctx){
//    std::cout << "visitOp2immediate" << std::endl;
    unsigned int op2 = CommandVisitor::visitImmediate(ctx->immediate());
    return Set::shifter::immediate(op2);
}
antlrcpp::Any CommandVisitor::visitOp2register(assembler::ARMParser::Op2registerContext *ctx){
//    std::cout << "visitOp2Reg" << std::endl;
    unsigned int op2 = CommandVisitor::visitReg(ctx->reg());
    return Set::shifter::reg(op2);
}

antlrcpp::Any CommandVisitor::visitOp2inlineShift(assembler::ARMParser::Op2inlineShiftContext *ctx){
//    std::cout << "visitOp2inlineShift" << std::endl;
    unsigned int op2 = CommandVisitor::visitReg(ctx->reg());

    antlrcpp::Any test = CommandVisitor::visit(ctx->shift_operation());
    if(!test.is<std::function<ShiftOperand (unsigned int)>>()){
        std::cerr << "Shift operation not found" << std::endl;
        return std::error_condition();
    }

    std::function<ShiftOperand (unsigned int)> tmp = test.as<std::function<ShiftOperand (unsigned int)>>();
    ShiftOperand shift_operation = tmp.operator()(op2);
    return shift_operation;
}

antlrcpp::Any CommandVisitor::visitShiftByImmediate(assembler::ARMParser::ShiftByImmediateContext *ctx){
//    std::cout << "visitShiftByImmediate" << std::endl;
    Aluops shiftopcode = CommandVisitor::visitShiftopcode(ctx->shiftopcode());
    unsigned int imm = CommandVisitor::visit(ctx->immediate()).as<unsigned int>();
    return (std::function<ShiftOperand (unsigned int)>)[imm,shiftopcode](unsigned int index){return Set::shifter::inlineShift(index,shiftopcode,imm);};
}

antlrcpp::Any CommandVisitor::visitShiftByRegister(assembler::ARMParser::ShiftByRegisterContext *ctx){
//    std::cout << "visitShiftByRegister" << std::endl;
    Aluops shiftopcode = CommandVisitor::visit(ctx->shiftopcode()).as<Aluops>();
    unsigned int rm = CommandVisitor::visit(ctx->reg()).as<unsigned int>();
    return (std::function<ShiftOperand (unsigned int)>)[rm,shiftopcode](unsigned int index){return Set::shifter::inlineShiftReg(index,shiftopcode,rm);};
}
antlrcpp::Any CommandVisitor::visitRotateWithExtend(assembler::ARMParser::RotateWithExtendContext */*ctx*/){
//    std::cout << "visitRotateWithExtend" << std::endl;
    return (std::function<ShiftOperand (unsigned int)>)[](unsigned int index){return Set::shifter::inlineShift(index,Aluops::RRX,0);};
}

antlrcpp::Any CommandVisitor::visitShiftopcode(assembler::ARMParser::ShiftopcodeContext *ctx) {
//    std::cout << "visitShiftopcode" << std::endl;
    if(ctx->LSLI())
        return Aluops::LSL;
    else if(ctx->LSRI())
        return Aluops::LSR;
    else if(ctx->ASRI())
        return Aluops::ASR;
    else if(ctx->RORI())
        return Aluops::ROR;

    std::cerr << "Error in CommandVisitor.cpp in visitShiftopcode" << std::endl;
    return nullptr;
}


/*==================
 *
 *    Variables
 *
 ===================*/
antlrcpp::Any CommandVisitor::visitVariable(assembler::ARMParser::VariableContext *ctx){
    if(!ctx->LABEL())
        return -1;
    if(!ctx->datatype())
        return -1;
    if(!ctx->value())
        return -1;
    //std::cout << "visit variable"<< std::endl;
    std::string label = ctx->LABEL()->getText();
    //std::cout << "got label " << label << std::endl;
    Data::type type = visit(ctx->datatype());
    //std::cout << "got datatype "<< type << std::endl;
    antlrcpp::Any anytype = visit(ctx->value());
    //std::cout << anytype.is<std::vector<unsigned int>>() << std::endl;
    //std::cout << anytype.is<unsigned int>() << std::endl;
    if(anytype.is<std::string>())
    {
        std::string s = anytype;
        dataToReference.emplace(label,s);
        return 0;
    }
    std::vector<unsigned int> data = anytype;
    //std::cout << "got data"<< std::endl;

    if(type==Data::type::WORD){
        dataToValue.emplace(label,data);
    }
    return 0;
}

antlrcpp::Any CommandVisitor::visitNumberVal(assembler::ARMParser::NumberValContext *ctx){
    std::vector<unsigned int> values;
    //std::cout << "Number Val" << std::endl;
    //std::cout << "NUM" << std::endl;
    for(int i = 0; i < (int)ctx->number().size();i++){
        unsigned int val = visit(ctx->number().at(i));
        //std::cout << val << std::endl;
        values.emplace_back(val);
    }
    return values;
}

antlrcpp::Any CommandVisitor::visitLabelVal(assembler::ARMParser::LabelValContext *ctx){
    //std::cout << "Label Val" << std::endl;
    if(!ctx->LABELREF())
        return -1;

    std::string l = ctx->LABELREF()->getText();

    return l;
}
antlrcpp::Any CommandVisitor::visitStringVal(assembler::ARMParser::StringValContext *ctx){
    //std::cout << "String Val" << std::endl;
    std::vector<unsigned int> values;
    return values;
}

antlrcpp::Any CommandVisitor::visitDatatype(assembler::ARMParser::DatatypeContext *ctx){
    if(ctx->BYTE())
        return Data::type::BYTE;
    if(ctx->WORD())
        return Data::type::WORD;
    if(ctx->ASCIZ())
        return Data::type::ASCIZ;

    return Data::type::WORD;
}

antlrcpp::Any CommandVisitor::visitNumber(assembler::ARMParser::NumberContext *ctx){
    if(ctx->HEX()){
        return (unsigned int)std::stoul(ctx->HEX()->getText(), nullptr, 16);
    }else if(ctx->NUMBER()){
        return (unsigned int)std::stoul(ctx->NUMBER()->getText());
    }
    std::cerr << "no number value found" << std::endl;
    return (unsigned int)0;
}

/*==================
 *
 *    Multiplication
 *
 ===================*/

antlrcpp::Any CommandVisitor::visitNormalMul(assembler::ARMParser::NormalMulContext *ctx){
    Condition cond = Condition::AL;
    if(ctx->cond())
        cond = CommandVisitor::visit(ctx->cond()).as<Condition>();

    bool updateFlag = ctx->UPDATEFLAG()!=nullptr;

    if(!ctx->rd)
        return -1;
    if(!ctx->rn)
        return -1;
    if(!ctx->rm)
        return -1;
    unsigned int rd = visit(ctx->rd);
    unsigned int rn = visit(ctx->rn);
    unsigned int rm = visit(ctx->rm);

    Instruction inst = Set::normalMultiply(cond,updateFlag,rd,rn,rm,toSL(ctx),ctx->getText());
    program.push_back(inst);
    return inst;
}

antlrcpp::Any CommandVisitor::visitImmediate(assembler::ARMParser::ImmediateContext *ctx){
//    std::cout << "visitImmediate" << std::endl;
    if(ctx->HEX()){
        return (unsigned int)std::stoul(ctx->HEX()->getText(), nullptr, 16);
    }else if(ctx->NUMBER()){
        return (unsigned int)std::stoul(ctx->NUMBER()->getText());
    }
    std::cerr << "no immediate value found" << std::endl;
    return (unsigned int)0;
}

antlrcpp::Any CommandVisitor::visitCond(assembler::ARMParser::CondContext *ctx){
//    std::cout << "visitCond" << std::endl;
    if(ctx->EQ())
        return Condition::EQ;
    else if (ctx->NE())
        return Condition::NE;
    else if (ctx->CS())
        return Condition::CS;
    else if (ctx->CC())
        return Condition::CC;
    else if (ctx->MI())
        return Condition::MI;
    else if (ctx->PL())
        return Condition::PL;
    else if (ctx->VS())
        return Condition::VS;
    else if (ctx->VC())
        return Condition::VC;
    else if (ctx->HI())
        return Condition::HI;
    else if (ctx->LS())
        return Condition::LS;
    else if (ctx->GE())
        return Condition::GE;
    else if (ctx->LT())
        return Condition::LT;
    else if (ctx->GT())
        return Condition::GT;
    else if (ctx->LE())
        return Condition::LE;
    else if (ctx->AL())
        return Condition::AL;
    else
        return Condition::AL;
}

antlrcpp::Any CommandVisitor::visitReg(assembler::ARMParser::RegContext *ctx) {
//    std::cout << "visitReg" << std::endl;
    unsigned int n = 16;
    if(ctx->R0())
        n=0;
    else if(ctx->R1())
        n=1;
    else if(ctx->R2())
        n=2;
    else if(ctx->R3())
        n=3;
    else if(ctx->R4())
        n=4;
    else if(ctx->R5())
        n=5;
    else if(ctx->R6())
        n=6;
    else if(ctx->R7())
        n=7;
    else if(ctx->R8())
        n=8;
    else if(ctx->R9())
        n=9;
    else if(ctx->R10())
        n=10;
    else if(ctx->R11())
        n=11;
    else if(ctx->R12())
        n=12;
    else if(ctx->R13())
        n=13;
    else if(ctx->R14())
        n=14;
    else if(ctx->R15())
        n=15;
//    std::cout << "visitReg returning (unsigned int)" << n << std::endl;
    return n;
}

antlrcpp::Any CommandVisitor::visitLabel(assembler::ARMParser::LabelContext *ctx){
//    std::cout << "visitLabel" << std::endl;
    if(ctx->LABEL())
    {
        std::string label = ctx->LABEL()->getText();
        label = label.substr(0,label.length()-1);
        labels.insert(std::make_pair(label,program.size()));
        return label;
    }else{
        std::string label = ctx->LOCALLABEL()->getText();
        label = label.substr(0,label.length()-1);
        labels.insert(std::make_pair(label,program.size()));
        return label;
    }
}
