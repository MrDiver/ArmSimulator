#ifndef BREAKPOINTWIDGET_H
#define BREAKPOINTWIDGET_H

#include <QWidget>
#include "codearea.h"
class BreakPointWidget : public QWidget
{
    Q_OBJECT
public:
    BreakPointWidget(CodeArea* codeArea):QWidget(codeArea),codeArea(codeArea){
    }

    QSize sizeHint() const override{
        return QSize(codeArea->breakpointsWidth(),0);
    }
protected:
    void paintEvent(QPaintEvent *event) override{
        codeArea->breakpointAreaPaintEvent(event);
    }
    void mouseReleaseEvent(QMouseEvent *event) override{
        codeArea->breakpointClickedEvent(event);
    }
private:
    CodeArea* codeArea;
};

#endif // BREAKPOINTWIDGET_H
