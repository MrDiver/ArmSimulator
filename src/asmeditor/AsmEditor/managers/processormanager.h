#ifndef PROCESSORMANAGER_H
#define PROCESSORMANAGER_H

#include <QObject>

class ProcessorManager : public QObject
{
    Q_OBJECT
public:
    explicit ProcessorManager(QObject *parent = nullptr);

signals:

};

#endif // PROCESSORMANAGER_H
