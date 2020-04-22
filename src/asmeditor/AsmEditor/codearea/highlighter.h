#ifndef HIGHLIGHTER_H
#define HIGHLIGHTER_H

#include <QSyntaxHighlighter>
#include <QTextDocument>
#include <QRegularExpression>

class Highlighter : public QSyntaxHighlighter
{
    Q_OBJECT
public:
    Highlighter(QTextDocument *parent = nullptr);
    int currentLine = 0;
protected:
    void highlightBlock(const QString &text) override;

private:
    struct HighlightingRule
    {
        QRegularExpression pattern;
        QTextCharFormat format;
    };
    QVector<HighlightingRule> rules;

    QRegularExpression commentStartExpression;
    QRegularExpression commentEndExpression;

    QTextCharFormat keywordFormat;
    QTextCharFormat singleLineCommentFormat;
    QTextCharFormat multiLineCommentFormat;
    QTextCharFormat specialRegsFormat;
    QTextCharFormat numberFormat;
    QTextCharFormat labelFormat;
    QTextCharFormat functionFormat;
    QTextCharFormat currentLineFormat;

};

#endif // HIGHLIGHTER_H
