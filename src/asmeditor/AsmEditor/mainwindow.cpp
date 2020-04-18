#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("ASM IDE [*]");
    codeArea = this->findChild<CodeArea*>("Code");
    QListView* list = this->findChild<QListView*>("RecentList");
    QTreeView* tree = this->findChild<QTreeView*>("FolderTree");
    fm = new FileManager(this,list,tree,codeArea);
    connect(ui->actionNew,&QAction::triggered,fm,&FileManager::fileNew);
    connect(ui->actionOpen,&QAction::triggered,fm,&FileManager::fileOpen);
    connect(ui->actionSave,&QAction::triggered,fm,&FileManager::fileSave);
    connect(ui->actionSave_As,&QAction::triggered,fm,&FileManager::fileSaveAs);
    connect(ui->actionOpen_Folder,&QAction::triggered,fm,&FileManager::folderOpen);
    connect(ui->actionCopy,&QAction::triggered,codeArea,&QPlainTextEdit::copy);
    connect(ui->actionPaste,&QAction::triggered,codeArea,&QPlainTextEdit::paste);
    connect(ui->actionCut,&QAction::triggered,codeArea,&QPlainTextEdit::cut);
    connect(ui->actionUndo,&QAction::triggered,codeArea,&QPlainTextEdit::undo);
    connect(ui->actionRedo,&QAction::triggered,codeArea,&QPlainTextEdit::redo);
    connect(ui->actionAdd_Breakpoint,&QAction::triggered,codeArea,&CodeArea::addBreakpoint);

}

MainWindow::~MainWindow()
{
    delete ui;
}

int main(int argc,char **argv){
    QApplication app(argc,argv);
    MainWindow window;

    /*QSplitter splitter(&window);
    CodeArea code;
    QListWidget list;

    splitter.addWidget(&list);
    splitter.addWidget(&code);
    splitter.setStretchFactor(0,1);
    splitter.setStretchFactor(1,6);
    QSizePolicy policy = list.sizePolicy();
    policy.setHorizontalPolicy(QSizePolicy::Preferred);
    list.setMinimumWidth(200);
    window.setCentralWidget(&splitter);
*/
    window.show();
    return app.exec();
}
