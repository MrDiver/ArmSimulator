#ifndef LINENUMBERWIDGET_H
#define LINENUMBERWIDGET_H

#include <QWidget>
#include "codearea.h"
class LineNumberWidget : public QWidget
{
    Q_OBJECT
public:
    LineNumberWidget(CodeArea* codeArea):QWidget(codeArea),codeArea(codeArea){
    }

    QSize sizeHint() const override{
        return QSize(codeArea->lineNumberWidth(),0);
    }
protected:
    void paintEvent(QPaintEvent *event) override{
        codeArea->lineNumberAreaPaintEvent(event);
    }
private:
    CodeArea* codeArea;
};

#endif // LINENUMBERWIDGET_H
