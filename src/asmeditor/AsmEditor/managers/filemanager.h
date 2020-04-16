#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QObject>
#include <QListWidget>
#include <QTreeView>
#include <QFileDialog>
#include <QMessageBox>
#include <QMainWindow>
#include <QTextStream>
#include <QFileSystemModel>
#include <QStandardItemModel>
#include "codearea/codearea.h"
class FileManager : public QObject
{
    Q_OBJECT
public:
    FileManager(QMainWindow* parent,QListView* list,QTreeView* tree,CodeArea* code);
private:
    QString currentFile;
    QListView* list;
    QTreeView* tree;
    CodeArea* code;
    QMainWindow* mainWindow;
    QFileSystemModel* modelFolder;
    bool isSaved;
    void checkUnsaved();
    void save(QString name);
    void open(QString name);
    QStandardItemModel* itemModel;
public slots:
    void fileNew();
    void fileOpen();
    void folderOpen();
    void fileSave();
    void fileSaveAs();
    void fileChanged();
    void itemDoubleClicked(const QModelIndex &mindex);
};

#endif // FILEMANAGER_H
