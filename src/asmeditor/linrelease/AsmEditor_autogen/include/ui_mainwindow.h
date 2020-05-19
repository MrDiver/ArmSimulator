/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "codearea.h"
#include "consolewindow/consolewindow.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionClose;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionRun;
    QAction *actionStep;
    QAction *actionReset;
    QAction *actionAdd_Breakpoint;
    QAction *actionOpen_Folder;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCompile;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSplitter *splitter_3;
    QSplitter *LeftSplitter;
    QListView *RecentList;
    QTreeView *FolderTree;
    QSplitter *MiddleSplitter;
    CodeArea *Code;
    QTabWidget *tabWidget;
    QWidget *CodeOutputTab;
    QHBoxLayout *horizontalLayout;
    ConsoleWindow *CodeOutput;
    QWidget *ErrorTab;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *ErrorList;
    QTabWidget *InfoTabs;
    QWidget *RegisterTab;
    QGridLayout *gridLayout;
    QTableWidget *RegisterTable;
    QWidget *MemoryTab;
    QGridLayout *gridLayout_3;
    QTableWidget *MemoryTable;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuProgram;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(994, 611);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QString::fromUtf8("actionRun"));
        actionStep = new QAction(MainWindow);
        actionStep->setObjectName(QString::fromUtf8("actionStep"));
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionAdd_Breakpoint = new QAction(MainWindow);
        actionAdd_Breakpoint->setObjectName(QString::fromUtf8("actionAdd_Breakpoint"));
        actionOpen_Folder = new QAction(MainWindow);
        actionOpen_Folder->setObjectName(QString::fromUtf8("actionOpen_Folder"));
        actionOpen_Folder->setEnabled(false);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCompile = new QAction(MainWindow);
        actionCompile->setObjectName(QString::fromUtf8("actionCompile"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setAutoFillBackground(false);
        splitter_3->setFrameShape(QFrame::NoFrame);
        splitter_3->setOrientation(Qt::Horizontal);
        LeftSplitter = new QSplitter(splitter_3);
        LeftSplitter->setObjectName(QString::fromUtf8("LeftSplitter"));
        LeftSplitter->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LeftSplitter->sizePolicy().hasHeightForWidth());
        LeftSplitter->setSizePolicy(sizePolicy);
        LeftSplitter->setMinimumSize(QSize(50, 0));
        LeftSplitter->setBaseSize(QSize(500, 0));
        LeftSplitter->setFrameShape(QFrame::NoFrame);
        LeftSplitter->setOrientation(Qt::Vertical);
        RecentList = new QListView(LeftSplitter);
        RecentList->setObjectName(QString::fromUtf8("RecentList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(RecentList->sizePolicy().hasHeightForWidth());
        RecentList->setSizePolicy(sizePolicy1);
        RecentList->setEditTriggers(QAbstractItemView::EditKeyPressed);
        RecentList->setDragEnabled(true);
        LeftSplitter->addWidget(RecentList);
        FolderTree = new QTreeView(LeftSplitter);
        FolderTree->setObjectName(QString::fromUtf8("FolderTree"));
        FolderTree->setTabKeyNavigation(false);
        FolderTree->setHeaderHidden(false);
        LeftSplitter->addWidget(FolderTree);
        splitter_3->addWidget(LeftSplitter);
        MiddleSplitter = new QSplitter(splitter_3);
        MiddleSplitter->setObjectName(QString::fromUtf8("MiddleSplitter"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(5);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MiddleSplitter->sizePolicy().hasHeightForWidth());
        MiddleSplitter->setSizePolicy(sizePolicy2);
        MiddleSplitter->setFrameShape(QFrame::NoFrame);
        MiddleSplitter->setOrientation(Qt::Vertical);
        Code = new CodeArea(MiddleSplitter);
        Code->setObjectName(QString::fromUtf8("Code"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(20);
        sizePolicy3.setHeightForWidth(Code->sizePolicy().hasHeightForWidth());
        Code->setSizePolicy(sizePolicy3);
        MiddleSplitter->addWidget(Code);
        tabWidget = new QTabWidget(MiddleSplitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy4);
        tabWidget->setBaseSize(QSize(0, 1000));
        tabWidget->setAcceptDrops(false);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        CodeOutputTab = new QWidget();
        CodeOutputTab->setObjectName(QString::fromUtf8("CodeOutputTab"));
        horizontalLayout = new QHBoxLayout(CodeOutputTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CodeOutput = new ConsoleWindow(CodeOutputTab);
        CodeOutput->setObjectName(QString::fromUtf8("CodeOutput"));

        horizontalLayout->addWidget(CodeOutput);

        tabWidget->addTab(CodeOutputTab, QString());
        ErrorTab = new QWidget();
        ErrorTab->setObjectName(QString::fromUtf8("ErrorTab"));
        horizontalLayout_2 = new QHBoxLayout(ErrorTab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ErrorList = new QListWidget(ErrorTab);
        ErrorList->setObjectName(QString::fromUtf8("ErrorList"));

        horizontalLayout_2->addWidget(ErrorList);

        tabWidget->addTab(ErrorTab, QString());
        MiddleSplitter->addWidget(tabWidget);
        splitter_3->addWidget(MiddleSplitter);
        InfoTabs = new QTabWidget(splitter_3);
        InfoTabs->setObjectName(QString::fromUtf8("InfoTabs"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(2);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(InfoTabs->sizePolicy().hasHeightForWidth());
        InfoTabs->setSizePolicy(sizePolicy5);
        InfoTabs->setMinimumSize(QSize(50, 0));
        InfoTabs->setBaseSize(QSize(500, 0));
        InfoTabs->setAutoFillBackground(false);
        RegisterTab = new QWidget();
        RegisterTab->setObjectName(QString::fromUtf8("RegisterTab"));
        gridLayout = new QGridLayout(RegisterTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        RegisterTable = new QTableWidget(RegisterTab);
        if (RegisterTable->columnCount() < 3)
            RegisterTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        RegisterTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        RegisterTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        RegisterTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (RegisterTable->rowCount() < 20)
            RegisterTable->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(11, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(12, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(13, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(14, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(15, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(16, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(17, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(18, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        RegisterTable->setVerticalHeaderItem(19, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        RegisterTable->setItem(0, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        RegisterTable->setItem(0, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        RegisterTable->setItem(0, 2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        RegisterTable->setItem(1, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        RegisterTable->setItem(1, 1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        RegisterTable->setItem(1, 2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        RegisterTable->setItem(2, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        RegisterTable->setItem(2, 1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        RegisterTable->setItem(2, 2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        RegisterTable->setItem(3, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        RegisterTable->setItem(3, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        RegisterTable->setItem(3, 2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        RegisterTable->setItem(4, 0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        RegisterTable->setItem(4, 1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        RegisterTable->setItem(4, 2, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        RegisterTable->setItem(5, 0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        RegisterTable->setItem(5, 1, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        RegisterTable->setItem(5, 2, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        RegisterTable->setItem(6, 0, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        RegisterTable->setItem(6, 1, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        RegisterTable->setItem(6, 2, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        RegisterTable->setItem(7, 0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        RegisterTable->setItem(7, 1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        RegisterTable->setItem(7, 2, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        RegisterTable->setItem(8, 0, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        RegisterTable->setItem(8, 1, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        RegisterTable->setItem(8, 2, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        RegisterTable->setItem(9, 0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        RegisterTable->setItem(9, 1, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        RegisterTable->setItem(9, 2, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        RegisterTable->setItem(10, 0, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        RegisterTable->setItem(10, 1, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        RegisterTable->setItem(10, 2, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        RegisterTable->setItem(11, 0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        RegisterTable->setItem(11, 1, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        RegisterTable->setItem(11, 2, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        RegisterTable->setItem(12, 0, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        RegisterTable->setItem(12, 1, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        RegisterTable->setItem(12, 2, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        RegisterTable->setItem(13, 0, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        RegisterTable->setItem(13, 1, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        RegisterTable->setItem(13, 2, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        RegisterTable->setItem(14, 0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        RegisterTable->setItem(14, 1, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        RegisterTable->setItem(14, 2, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        RegisterTable->setItem(15, 0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        RegisterTable->setItem(15, 1, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        RegisterTable->setItem(15, 2, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        RegisterTable->setItem(16, 0, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        RegisterTable->setItem(16, 1, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        RegisterTable->setItem(16, 2, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        RegisterTable->setItem(17, 0, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        RegisterTable->setItem(17, 1, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        RegisterTable->setItem(17, 2, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        RegisterTable->setItem(18, 0, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        RegisterTable->setItem(18, 1, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        RegisterTable->setItem(18, 2, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        RegisterTable->setItem(19, 0, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        RegisterTable->setItem(19, 1, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        RegisterTable->setItem(19, 2, __qtablewidgetitem82);
        RegisterTable->setObjectName(QString::fromUtf8("RegisterTable"));
        RegisterTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        RegisterTable->setShowGrid(true);
        RegisterTable->setGridStyle(Qt::DashLine);
        RegisterTable->setSortingEnabled(false);
        RegisterTable->setWordWrap(true);

        gridLayout->addWidget(RegisterTable, 0, 0, 1, 1);

        InfoTabs->addTab(RegisterTab, QString());
        MemoryTab = new QWidget();
        MemoryTab->setObjectName(QString::fromUtf8("MemoryTab"));
        gridLayout_3 = new QGridLayout(MemoryTab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        MemoryTable = new QTableWidget(MemoryTab);
        if (MemoryTable->columnCount() < 3)
            MemoryTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        MemoryTable->setHorizontalHeaderItem(0, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        MemoryTable->setHorizontalHeaderItem(1, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        MemoryTable->setHorizontalHeaderItem(2, __qtablewidgetitem85);
        MemoryTable->setObjectName(QString::fromUtf8("MemoryTable"));

        gridLayout_3->addWidget(MemoryTable, 0, 0, 1, 1);

        InfoTabs->addTab(MemoryTab, QString());
        splitter_3->addWidget(InfoTabs);

        gridLayout_2->addWidget(splitter_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 994, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuProgram = new QMenu(menubar);
        menuProgram->setObjectName(QString::fromUtf8("menuProgram"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuProgram->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_Folder);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionAdd_Breakpoint);
        menuProgram->addAction(actionRun);
        menuProgram->addAction(actionStep);
        menuProgram->addAction(actionReset);
        toolBar->addAction(actionRun);
        toolBar->addAction(actionStep);
        toolBar->addAction(actionReset);
        toolBar->addAction(actionAdd_Breakpoint);
        toolBar->addAction(actionCompile);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        InfoTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRun->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
#if QT_CONFIG(shortcut)
        actionRun->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
#if QT_CONFIG(shortcut)
        actionStep->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
#if QT_CONFIG(shortcut)
        actionReset->setShortcut(QCoreApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd_Breakpoint->setText(QCoreApplication::translate("MainWindow", "Breakpoint", nullptr));
#if QT_CONFIG(shortcut)
        actionAdd_Breakpoint->setShortcut(QCoreApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_Folder->setText(QCoreApplication::translate("MainWindow", "Open Folder", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_Folder->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCompile->setText(QCoreApplication::translate("MainWindow", "Compile", nullptr));
#if QT_CONFIG(shortcut)
        actionCompile->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(CodeOutputTab), QCoreApplication::translate("MainWindow", "CodeOutput", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ErrorTab), QCoreApplication::translate("MainWindow", "Errors", nullptr));
        QTableWidgetItem *___qtablewidgetitem = RegisterTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Decimal", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = RegisterTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = RegisterTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Binary", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = RegisterTable->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "R0", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = RegisterTable->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "R1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = RegisterTable->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "R2", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = RegisterTable->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "R3", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = RegisterTable->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "R4", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = RegisterTable->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "R5", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = RegisterTable->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "R6", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = RegisterTable->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "R7", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = RegisterTable->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "R8", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = RegisterTable->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "R9", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = RegisterTable->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "R10", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = RegisterTable->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "R11", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = RegisterTable->verticalHeaderItem(12);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "R12", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = RegisterTable->verticalHeaderItem(13);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "R13", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = RegisterTable->verticalHeaderItem(14);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "R14", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = RegisterTable->verticalHeaderItem(15);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "R15", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = RegisterTable->verticalHeaderItem(16);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = RegisterTable->verticalHeaderItem(17);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = RegisterTable->verticalHeaderItem(18);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = RegisterTable->verticalHeaderItem(19);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "N", nullptr));

        const bool __sortingEnabled = RegisterTable->isSortingEnabled();
        RegisterTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem23 = RegisterTable->item(0, 0);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = RegisterTable->item(0, 1);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = RegisterTable->item(0, 2);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = RegisterTable->item(1, 0);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = RegisterTable->item(1, 1);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = RegisterTable->item(1, 2);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = RegisterTable->item(2, 0);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = RegisterTable->item(2, 1);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = RegisterTable->item(2, 2);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = RegisterTable->item(3, 0);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = RegisterTable->item(3, 1);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = RegisterTable->item(3, 2);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = RegisterTable->item(4, 0);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = RegisterTable->item(4, 1);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = RegisterTable->item(4, 2);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = RegisterTable->item(5, 0);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = RegisterTable->item(5, 1);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = RegisterTable->item(5, 2);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = RegisterTable->item(6, 0);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = RegisterTable->item(6, 1);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = RegisterTable->item(6, 2);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = RegisterTable->item(7, 0);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = RegisterTable->item(7, 1);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = RegisterTable->item(7, 2);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = RegisterTable->item(8, 0);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = RegisterTable->item(8, 1);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = RegisterTable->item(8, 2);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = RegisterTable->item(9, 0);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = RegisterTable->item(9, 1);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = RegisterTable->item(9, 2);
        ___qtablewidgetitem52->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = RegisterTable->item(10, 0);
        ___qtablewidgetitem53->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = RegisterTable->item(10, 1);
        ___qtablewidgetitem54->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = RegisterTable->item(10, 2);
        ___qtablewidgetitem55->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = RegisterTable->item(11, 0);
        ___qtablewidgetitem56->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = RegisterTable->item(11, 1);
        ___qtablewidgetitem57->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = RegisterTable->item(11, 2);
        ___qtablewidgetitem58->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = RegisterTable->item(12, 0);
        ___qtablewidgetitem59->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = RegisterTable->item(12, 1);
        ___qtablewidgetitem60->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = RegisterTable->item(12, 2);
        ___qtablewidgetitem61->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = RegisterTable->item(13, 0);
        ___qtablewidgetitem62->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = RegisterTable->item(13, 1);
        ___qtablewidgetitem63->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = RegisterTable->item(13, 2);
        ___qtablewidgetitem64->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = RegisterTable->item(14, 0);
        ___qtablewidgetitem65->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = RegisterTable->item(14, 1);
        ___qtablewidgetitem66->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = RegisterTable->item(14, 2);
        ___qtablewidgetitem67->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = RegisterTable->item(15, 0);
        ___qtablewidgetitem68->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = RegisterTable->item(15, 1);
        ___qtablewidgetitem69->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem70 = RegisterTable->item(15, 2);
        ___qtablewidgetitem70->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem71 = RegisterTable->item(16, 0);
        ___qtablewidgetitem71->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem72 = RegisterTable->item(16, 1);
        ___qtablewidgetitem72->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem73 = RegisterTable->item(16, 2);
        ___qtablewidgetitem73->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem74 = RegisterTable->item(17, 0);
        ___qtablewidgetitem74->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem75 = RegisterTable->item(17, 1);
        ___qtablewidgetitem75->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem76 = RegisterTable->item(17, 2);
        ___qtablewidgetitem76->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem77 = RegisterTable->item(18, 0);
        ___qtablewidgetitem77->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem78 = RegisterTable->item(18, 1);
        ___qtablewidgetitem78->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem79 = RegisterTable->item(18, 2);
        ___qtablewidgetitem79->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem80 = RegisterTable->item(19, 0);
        ___qtablewidgetitem80->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem81 = RegisterTable->item(19, 1);
        ___qtablewidgetitem81->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem82 = RegisterTable->item(19, 2);
        ___qtablewidgetitem82->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        RegisterTable->setSortingEnabled(__sortingEnabled);

        InfoTabs->setTabText(InfoTabs->indexOf(RegisterTab), QCoreApplication::translate("MainWindow", "Register", nullptr));
        QTableWidgetItem *___qtablewidgetitem83 = MemoryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem83->setText(QCoreApplication::translate("MainWindow", "Decimal", nullptr));
        QTableWidgetItem *___qtablewidgetitem84 = MemoryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem84->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        QTableWidgetItem *___qtablewidgetitem85 = MemoryTable->horizontalHeaderItem(2);
        ___qtablewidgetitem85->setText(QCoreApplication::translate("MainWindow", "Binary", nullptr));
        InfoTabs->setTabText(InfoTabs->indexOf(MemoryTab), QCoreApplication::translate("MainWindow", "Memory", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuProgram->setTitle(QCoreApplication::translate("MainWindow", "Processor", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
