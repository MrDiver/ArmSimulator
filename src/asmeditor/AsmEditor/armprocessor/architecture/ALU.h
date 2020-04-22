//
// Created by Prodigy on 18.04.2020.
//

#ifndef ASMEDITOR_ALU_H
#define ASMEDITOR_ALU_H


#include "CurrentProgramStatusRegister.h"
#include "Aluops.h"


class ALU{
public:
    CPSR* cpsr;
    bool updateFlags=false;
    ALU(CPSR* cpsr);
    void reset();
    unsigned int calcU(Aluops op,unsigned int a,unsigned int b);
};

#endif //ASMEDITOR_ALU_H
