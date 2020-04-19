#ifndef CODEAREA_H
#define CODEAREA_H

#include <QWidget>
#include <QPlainTextEdit>
#include <QPainter>
#include <QTextBlock>
#include <QTextDocumentFragment>
class ProcessorManager;
class Highlighter;
class CodeArea : public QPlainTextEdit
{
    Q_OBJECT
public:
    CodeArea(QWidget *parent = nullptr);
    int lineNumberWidth();
    void lineNumberAreaPaintEvent(QPaintEvent* event);
    int breakpointsWidth();
    void breakpointAreaPaintEvent(QPaintEvent* event);
    void breakpointClickedEvent(QMouseEvent *event);
    QWidget* breakPointWidget;

    void setProcessorManager(ProcessorManager* pm){
        this->pm = pm;
    }

public Q_SLOTS:
    void blocksChanged(int newCount);
    void updateRequested(const QRect& rect,int dy);
    void addBreakpoint();

protected:
    void resizeEvent(QResizeEvent *e) override;    
private:
    QWidget* lineNumberWidget;
    Highlighter* highlighter;
    QSet<int> breakpoints;
    ProcessorManager* pm;
    bool pmIsSet = false;
};

#endif // CODEAREA_H
