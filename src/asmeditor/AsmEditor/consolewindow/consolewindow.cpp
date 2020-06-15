#include "consolewindow.h"
#include <QTabWidget>
ConsoleWindow::ConsoleWindow(QWidget* parent):QPlainTextEdit(parent)
{

}

void ConsoleWindow::print(std::string s){
    this->setPlainText(this->toPlainText()+"\n"+QString::fromStdString(s));
}

void ConsoleWindow::clear(){
    this->setPlainText(QString());
}
