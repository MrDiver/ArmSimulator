#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "codearea/codearea.h"
#include "managers/filemanager.h"
#include "managers/processormanager.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    CodeArea* codeArea;
    QVector<QString> recent;
    FileManager* fm;
    ProcessorManager* pm;
};

#endif // MAINWINDOW_H
