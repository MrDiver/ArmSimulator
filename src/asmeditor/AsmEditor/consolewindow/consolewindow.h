#ifndef CONSOLEWINDOW_H
#define CONSOLEWINDOW_H

#include <QPlainTextEdit>

class ConsoleWindow : public QPlainTextEdit
{
    Q_OBJECT
public:
    ConsoleWindow(QWidget* parent = nullptr);
public Q_SLOTS:
    void print(std::string s);
    void clear();
};

#endif // CONSOLEWINDOW_H
