#ifndef CODEAREA_H
#define CODEAREA_H

#include <QWidget>
#include <QPlainTextEdit>
#include <QPainter>
#include <QTextBlock>
#include <QTextDocumentFragment>

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
protected:
    void resizeEvent(QResizeEvent *e) override;
public slots:
    void blocksChanged(int newCount);
    void updateRequested(const QRect& rect,int dy);
    void addBreakpoint();
private:
    QWidget* lineNumberWidget;
    QWidget* breakPointWidget;
    Highlighter* highlighter;
    QSet<int> breakpoints;
};

#endif // CODEAREA_H
