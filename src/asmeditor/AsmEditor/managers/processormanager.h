#ifndef PROCESSORMANAGER_H
#define PROCESSORMANAGER_H


#include <QTableWidget>
#include "filemanager.h"
#include "consolewindow/consolewindow.h"
#include "antlr4-runtime.h"
#include "armparser/assembler/ARMLexer.h"
#include "armparser/assembler/ARMParser.h"
#include "armparser/walker/CommandVisitor.h"
#include "armprocessor/processor.h"

class ProcessorManager : public QObject
{
    Q_OBJECT
public:
    ProcessorManager(CodeArea* ca,ConsoleWindow* cw,QListWidget* errorList,QTableWidget* regsTable,QTableWidget* memoryTable);
    ~ProcessorManager();
    QSet<int> getActiveCodelines();
private:
    CodeArea* ca;
    Processor* p;
    ConsoleWindow* cw;
    QListWidget* errorList;
    QTableWidget* regsTable;
    QTableWidget* memoryTable;
    QSet<int> currentLines;
    void updateRegs();
    void updateMemory();
    void updateError();
    bool errorOccured = false;
    bool hitBreakpoint;
public Q_SLOTS:
    void lint();
    void runProgram();
    void stepProgram();
    void resetProgram();
};

#endif // PROCESSORMANAGER_H
