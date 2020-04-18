//
// Created by Prodigy on 17.04.2020.
//

#ifndef ARMPARSER_COMMANDVISITOR_H
#define ARMPARSER_COMMANDVISITOR_H

#include "CommandVisitor.h"
#include "ARMParserBaseVisitor.h"
class CommandVisitor : public assembler::ARMParserBaseVisitor{
public:
    CommandVisitor(){
        std::cout << "HELLO VISITOR" << std::endl;
    }
};


#endif //ARMPARSER_COMMANDVISITOR_H
