#include "highlighter.h"
Highlighter::Highlighter(QTextDocument* parent)
    :QSyntaxHighlighter(parent)
{
    HighlightingRule rule;

    keywordFormat.setForeground(Qt::darkBlue);
    keywordFormat.setFontWeight(QFont::Bold);
    const QString keywords[] ={"adc","add","and","b","bic","bkpt","bl","blx","bx","cdp","cdp2","clz","cmn","cmn","cmp","eor","ldc","ldc2","ldm","ldr","mcr","mcr2","mcrr","mla","mov","mrc","mrc2","mrrc","mrs","msr","mul","mvn","orr","qadd","qdadd","qdsub","qsub","rsb","rsc","sbc","stm","str","sub","swi","swp","teq","tst"};
    const QString conditions[] = {"eq","ne","cs","cc","mi","pl","vs","vc","hi","ls","ge","lt","gt","le","al"};
    QVector<QString> commands;

    for(QString key : keywords){
        commands.append("\\b"+key+"\\b");
        for(QString con : conditions){
            commands.append("\\b"+key+con+"\\b");
        }
    }

    for(const QString &pattern : commands){
        rule.pattern = QRegularExpression(pattern,QRegularExpression::CaseInsensitiveOption);
        rule.format = keywordFormat;
        rules.append(rule);
    }


    functionFormat.setFontItalic(true);
    functionFormat.setForeground(Qt::darkCyan);
    functionFormat.setFontWeight(QFont::Bold);
    rule.pattern = QRegularExpression(QStringLiteral("\\b(push|pop)\\b"));
    rule.format = functionFormat;
    rules.append(rule);

    singleLineCommentFormat.setForeground(Qt::red);
    rule.pattern = QRegularExpression(QStringLiteral("//[^\n]*"));
    rule.format = singleLineCommentFormat;
    rules.append(rule);

    specialRegsFormat.setForeground(QColor::fromRgb(0,200,0));
    rule.pattern = QRegularExpression(QStringLiteral("PC|LR|SP"),QRegularExpression::CaseInsensitiveOption);
    rule.format = specialRegsFormat;
    rules.append(rule);

    numberFormat.setForeground(Qt::green);
    rule.pattern = QRegularExpression(QStringLiteral("#(0x(\\d|[a-f])+|\\d+)"),QRegularExpression::CaseInsensitiveOption);
    rule.format = numberFormat;
    rules.append(rule);

    labelFormat.setForeground(Qt::darkMagenta);
    rule.pattern = QRegularExpression(QStringLiteral("[a-z]+:"),QRegularExpression::CaseInsensitiveOption);
    rule.format = labelFormat;
    rules.append(rule);

    multiLineCommentFormat.setForeground(Qt::red);

    commentStartExpression = QRegularExpression(QStringLiteral("/\\*"));
    commentEndExpression = QRegularExpression(QStringLiteral("\\*/"));

    currentLineFormat.setBackground(Qt::yellow);
    currentLineFormat.setProperty(QTextFormat::FullWidthSelection,true);
}


void Highlighter::highlightBlock(const QString &text){
    for(const HighlightingRule &rule : qAsConst(rules)){
        QRegularExpressionMatchIterator matchIterator = rule.pattern.globalMatch(text);
        while(matchIterator.hasNext()){
            QRegularExpressionMatch match = matchIterator.next();
            setFormat(match.capturedStart(),match.capturedLength(),rule.format);
        }
    }
    setCurrentBlockState(0);

    int startIndex = 0;
    if (previousBlockState() != 1)
        startIndex = text.indexOf(commentStartExpression);

    while (startIndex >= 0) {
        QRegularExpressionMatch match = commentEndExpression.match(text, startIndex);
        int endIndex = match.capturedStart();
        int commentLength = 0;
        if (endIndex == -1) {
            setCurrentBlockState(1);
            commentLength = text.length() - startIndex;
        } else {
            commentLength = endIndex - startIndex
                            + match.capturedLength();
        }
        setFormat(startIndex, commentLength, multiLineCommentFormat);
        startIndex = text.indexOf(commentStartExpression, startIndex + commentLength);
    }

    if(currentBlock().blockNumber()+1 == currentLine){
        setFormat(0,currentBlock().length()-1,currentLineFormat);
    }

}
