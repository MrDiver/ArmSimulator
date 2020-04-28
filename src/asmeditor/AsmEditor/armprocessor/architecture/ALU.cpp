//
// Created by Prodigy on 19.04.2020.
//

#include "ALU.h"
#include "../bits.h"
#include "cmath"
ALU::ALU(CPSR* cpsr){
    this->cpsr = cpsr;
}


unsigned int ALU::calcU(Aluops op,unsigned int a,unsigned int b){
    unsigned int result=0;
    switch (op) {
        case ADD:
            result = a+b;
            break;
        case ADC:
            result = a+b+cpsr->C;
            break;
        case SUB:
            result = a-b;
            break;
        case SBC:
            result=a-b-(!cpsr->C);
            break;
        case MUL:
            result = a*b;
            break;
        case DIV:
            result = b==0?0: a/b;
            break;
        case AND:
            result = a & b;
            break;
        case OR:
            result = a | b;
            break;
        case XOR:
            result = a^b;
            break;
        case NOT:
            result = ~a;
            break;
        case BIC:
            result = a&(~b);
            break;
        default: result = 0;
        case ASR:
            result = ((signed long)a)>>((signed long)b);
            break;
        case LSL:
            result = a<<b;
            break;
        case LSR:
            result = a>>b;
            break;
        case ROR:
            result = (a>>b) | (a<<(32-b));
            break;
        case RRX:
            result = (((unsigned int)cpsr->C) << 31)|(a>>1);
            if(updateFlags)
                cpsr->C = a&1;
            break;
    }

    if (updateFlags)
    {
        cpsr->N = Bits::getBit(31,result)==1;
        cpsr->Z = result==0;
        if(op==ADD)
            cpsr->C = result > pow(2,32);
        else if(op==SUB)
            cpsr->C = result > a && result > b;
        //else
        //TODO: implement shift
    }
    updateFlags = false;
    return result;
}

void ALU::reset(){
    updateFlags = false;
}
