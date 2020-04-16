#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "codearea/codearea.h"
#include "managers/filemanager.h"

class CodeArea;
class FileManager;

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
};

#endif // MAINWINDOW_H
