#include "codearea.h"

#include "BreakPointWidget.h"
#include "linenumberwidget.h"
#include "highlighter.h"
#include <set>
QFont sourceCodePro;
QFont sourceCodeProIT;
CodeArea::CodeArea(QWidget *parent):QPlainTextEdit(parent)
{
    lineNumberWidget = new LineNumberWidget(this);
    breakPointWidget = new BreakPointWidget(this);
    connect(this,&CodeArea::blockCountChanged,this,&CodeArea::blocksChanged);
    connect(this,&CodeArea::updateRequest,this,&CodeArea::updateRequested);

    int id = QFontDatabase::addApplicationFont(":/fonts/scpro");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    sourceCodePro = QFont(family);
    id = QFontDatabase::addApplicationFont(":/fonts/scproit");
    family = QFontDatabase::applicationFontFamilies(id).at(0);
    sourceCodeProIT = QFont(family);
    sourceCodePro.setPointSize(12);
    this->setFont(sourceCodePro);

    highlighter = new Highlighter(this->document());

    this->setTabStopWidth(fontMetrics().horizontalAdvance(" ")*4);

    blocksChanged(0);
}

int CodeArea::lineNumberWidth()
{
    int blocks = qMax(1,this->blockCount());
    int digits = 1;
    while(blocks>=10){
        blocks/=10;
        digits++;
    }

    return 5 + fontMetrics().horizontalAdvance(QLatin1Char('9'))*digits;
}


int CodeArea::breakpointsWidth(){
    return 20;
}

void CodeArea::blocksChanged(int newBlockCount){
    setViewportMargins(lineNumberWidth()+breakpointsWidth(),0,0,0);
    printf("%d\n",newBlockCount);
    for(int b:breakpoints){
        if(b>=newBlockCount){
            breakpoints.remove(b);
        }
    }
    highlighter->currentLine=0;
    highlighter->rehighlight();
}

void CodeArea::updateRequested(const QRect &rect,int dy){
    //If scolling happened in the editor
    if(dy)
    {
        lineNumberWidget->scroll(0,dy);
        breakPointWidget->scroll(0,dy);
    }
    //if something happened then update the area of the lineNumbers that were effected
    else
    {
        lineNumberWidget->update(0,rect.y(),lineNumberWidget->width(),rect.height());
        breakPointWidget->update(0,rect.y(),breakPointWidget->width(),rect.height());
    }
    if(rect.contains(viewport()->rect()))
    {
        //blocksChanged(0);
    }
}


void CodeArea::resizeEvent(QResizeEvent *e){
    QPlainTextEdit::resizeEvent(e);

    QRect cr = contentsRect();
    lineNumberWidget->setGeometry(QRect(breakpointsWidth()+cr.left(),cr.top(),lineNumberWidth(),cr.height()));
    breakPointWidget->setGeometry(QRect(cr.left(),cr.top(),breakpointsWidth(),cr.height()));
}

void CodeArea::lineNumberAreaPaintEvent(QPaintEvent *event){
    QPainter painter(lineNumberWidget);
    painter.fillRect(event->rect(),Qt::lightGray);

    QTextBlock block = firstVisibleBlock();
    int blockIndex = block.blockNumber();
    int top = qRound(blockBoundingRect(block).translated(contentOffset()).top());
    int bottom = top+ qRound(blockBoundingRect(block).height());

    QTextDocumentFragment df = textCursor().selection();
    //while block is valid and in update region
    while(block.isValid()&&top<=event->rect().bottom()){
        if(block.isVisible()&&bottom>=event->rect().top()){
            QString number = QString::number(blockIndex+1);
            painter.setPen(Qt::black);
            int y = this->textCursor().blockNumber();
            if (blockIndex == y)
                painter.setPen(Qt::yellow);
            painter.drawText(0,top,lineNumberWidth()-3,fontMetrics().height(),Qt::AlignRight,number);
        }
        block = block.next();
        top = bottom;
        bottom = top+ qRound(blockBoundingRect(block).height());
        ++blockIndex;
    }
}


void CodeArea::breakpointAreaPaintEvent(QPaintEvent* event){
    QPainter painter(breakPointWidget);
    QRect rect = event->rect();
    painter.fillRect(rect,Qt::darkGray);
    //painter.fillRect(QRect(rect.left(),rect.top(),rect.width(),rect.height()),Qt::darkGray);

    QTextBlock block = firstVisibleBlock();
    int blockIndex = block.blockNumber();
    int top = qRound(blockBoundingRect(block).translated(contentOffset()).top());
    int bottom = top+ qRound(blockBoundingRect(block).height());


    //while block is valid and in update region
    while(block.isValid()&&top<=event->rect().bottom()){
        if(block.isVisible()&&bottom>=event->rect().top()){
            if (breakpoints.contains(blockIndex))
            {
                painter.setPen(QPen(Qt::red,10,Qt::SolidLine,Qt::PenCapStyle::RoundCap));
                painter.setRenderHint(QPainter::Antialiasing);
                painter.setBackground(Qt::darkRed);
                //painter.drawText(0,top,breakpointsWidth()-3,fontMetrics().height(),Qt::AlignRight,"O");
                painter.drawPoint(breakpointsWidth()/2,top+(bottom-top)/2);
            }
        }
        block = block.next();
        top = bottom;
        bottom = top+ qRound(blockBoundingRect(block).height());
        ++blockIndex;
    }
}

void CodeArea::breakpointClickedEvent(QMouseEvent *event){
    QTextBlock block = firstVisibleBlock();
    int blockIndex = block.blockNumber();
    int top = qRound(blockBoundingRect(block).translated(contentOffset()).top());
    int bottom = top+ qRound(blockBoundingRect(block).height());

    int y = event->y();


    while(block.isValid()){
        if(block.isVisible()&&top<=y&&bottom>=y){
            QSet<int> lines = pm->getActiveCodelines();
            if(breakpoints.contains(block.blockNumber())){
                breakpoints.remove(block.blockNumber());
                break;
            }
            else if(lines.contains(block.blockNumber()+1)){
                breakpoints.insert(block.blockNumber());
                break;
            }
        }
        block = block.next();
        top = bottom;
        bottom = top+ qRound(blockBoundingRect(block).height());
        ++blockIndex;
    }
    breakPointWidget->update();
}

void CodeArea::addBreakpoint(){
    int y = this->textCursor().blockNumber();
    QSet<int> lines = pm->getActiveCodelines();
    if(breakpoints.contains(y)){
        breakpoints.remove(y);
    }else if(lines.contains(y+1)){
        breakpoints.insert(y);
    }
    breakPointWidget->update();
}
