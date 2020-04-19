#ifndef PROCESSORMANAGER_H
#define PROCESSORMANAGER_H

#include "filemanager.h"
#include "consolewindow/consolewindow.h"
#include "antlr4-runtime.h"
#include "armparser/assembler/ARMLexer.h"
#include "armparser/assembler/ARMParser.h"
#include "armparser/walker/CommandVisitor.h"
#include "armprocessor/processor.h"
#include <QVector>
class ProcessorManager : public QObject
{
    Q_OBJECT
public:
    ProcessorManager(CodeArea* ca,ConsoleWindow* cw,QListWidget* errorList);
    ~ProcessorManager();
    QSet<int>* getActiveCodelines();
private:
    CodeArea* ca;
    Processor* p;
    ConsoleWindow* cw;
    QListWidget* errorList;
    QSet<int>* currentLines;

public Q_SLOTS:
    void lint();
};

#endif // PROCESSORMANAGER_H
