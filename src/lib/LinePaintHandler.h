#pragma once

#include <QMap>
#include <QColor>

namespace TextEditor {class TextEditorWidget;}

class QPlainTextEdit;
class LinePaintHandler
{
    TextEditor::TextEditorWidget *textEdit;
    QMap<int, int> lineCoverage;
public:
    LinePaintHandler(TextEditor::TextEditorWidget *textEdit, const QMap<int, int> &lineCoverage);
    virtual ~LinePaintHandler();

    void render();
protected:
    virtual QColor getColorForValue(int value) const = 0;
};
