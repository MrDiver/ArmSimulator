#include "filemanager.h"
#include <iostream>
#include <QStringListModel>
FileManager::FileManager(QMainWindow* parent,QListView* list, QTreeView* tree,CodeArea* code)
    :QObject(parent),mainWindow(parent)
{
    this->list = list;
    this->tree = tree;
    this->code = code;
    this->isSaved = true;
    this->modelFolder = new QFileSystemModel();
    this->itemModel = new QStandardItemModel(list);
    this->list->setModel(itemModel);
    connect(code,&CodeArea::textChanged,this,&FileManager::fileChanged);
    connect(list,&QListView::clicked,this,&FileManager::itemDoubleClicked);
}


void FileManager::checkUnsaved(){
    if(!isSaved)
    {
        int sb = QMessageBox::warning(nullptr,"Warning","Current file not saved!",QMessageBox::StandardButton::Discard,QMessageBox::StandardButton::Save);
        switch(sb){
        case QMessageBox::Discard:
            break;
        case QMessageBox::Save:
            this->fileSave();
        }
    }
}

void addItem(QStandardItemModel* model,QString display, QString path){
    QList<QStandardItem*> list=model->findItems(display);
    if(list.length()>0){
        QStandardItem* item = list.first();
        item->setData(path,1);
        return;
    }
    QStandardItem* item = new QStandardItem(display);
    item->setData(path,1);
    model->appendRow(item);
}

void FileManager::open(QString path){
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly|QFile::Text)){
        QMessageBox::warning(nullptr,"Error","Couldn't open file");
        return;
    }

    currentFile = path;
    QFileInfo info(file);
    mainWindow->setWindowTitle("ASM IDE "+info.fileName()+"[*]");
    QTextStream ts(&file);
    QString fileContent = ts.readAll();
    code->setPlainText(fileContent);
    isSaved = true;
    mainWindow->setWindowModified(false);

    addItem(itemModel,info.fileName(),path);
}

void FileManager::save(QString path){
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly|QFile::Text)){
        QMessageBox::warning(nullptr,"Error","Couldn't save file");
        return;
    }
    QFileInfo info(file);
    mainWindow->setWindowTitle("ASM IDE "+info.fileName()+"[*]");
    QString str = code->toPlainText();
    QTextStream out(&file);
    out << str;
    isSaved = true;
    mainWindow->setWindowModified(false);

    addItem(itemModel,info.fileName(),path);

}

void FileManager::fileNew(){
    checkUnsaved();
    currentFile.clear();
    code->setPlainText(QString());
    isSaved = true;
    mainWindow->setWindowModified(false);
}
void FileManager::fileOpen(){
    checkUnsaved();
    QString fileName = QFileDialog::getOpenFileName(nullptr,"Open File");
    open(fileName);
}
void FileManager::folderOpen(){
//    QString dirName = QFileDialog::getExistingDirectory(nullptr,"Open Folder");
//    QDir dir(dirName);
//    std::cout << dirName.toStdString() << std::endl;
//    modelFolder->setRootPath(dir.currentPath());
//    tree->setModel(modelFolder);
//    tree->setRootIndex(modelFolder->index(dir.currentPath()));
}



void FileManager::fileSave(){
    if(currentFile.isEmpty()){
        fileSaveAs();
    }else{
        if(!isSaved){
            save(currentFile);
        }
    }
}
void FileManager::fileSaveAs(){
    QString fileName = QFileDialog::getSaveFileName(nullptr,"Save File");
    save(fileName);
}

void FileManager::fileChanged(){
    isSaved = false;
    mainWindow->setWindowModified(true);
}

void FileManager::itemDoubleClicked(const QModelIndex &mIndex){
    checkUnsaved();
    QStandardItem* item = itemModel->itemFromIndex(mIndex);
    QString path = item->data(1).toString();
    open(path);
}
