#ifndef PROCESSORMANAGER_H
#define PROCESSORMANAGER_H

#include "filemanager.h"
//#include "antlr4-runtime.h"
//#include "armparser/assembler/ARMLexer.h"
//#include "armparser/assembler/ARMParser.h"
//#include "armparser/walker/CommandVisitor.h"
//#include "armprocessor/processor.h"
class ProcessorManager
{
public:
    ProcessorManager(FileManager* fm);
    ~ProcessorManager();
private:
    FileManager* fm;
    //Processor* p;
signals:

};

#endif // PROCESSORMANAGER_H
