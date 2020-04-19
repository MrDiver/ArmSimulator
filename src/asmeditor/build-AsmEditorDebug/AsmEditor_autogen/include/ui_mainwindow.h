/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
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
    QWidget *MemoryTab;
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
        InfoTabs->addTab(RegisterTab, QString());
        MemoryTab = new QWidget();
        MemoryTab->setObjectName(QString::fromUtf8("MemoryTab"));
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

        tabWidget->setCurrentIndex(0);
        InfoTabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose->setText(QApplication::translate("MainWindow", "Close", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionRun->setText(QApplication::translate("MainWindow", "Run", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRun->setShortcut(QApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_NO_SHORTCUT
        actionStep->setText(QApplication::translate("MainWindow", "Step", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStep->setShortcut(QApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_NO_SHORTCUT
        actionReset->setText(QApplication::translate("MainWindow", "Reset", nullptr));
#ifndef QT_NO_SHORTCUT
        actionReset->setShortcut(QApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_NO_SHORTCUT
        actionAdd_Breakpoint->setText(QApplication::translate("MainWindow", "Breakpoint", nullptr));
#ifndef QT_NO_SHORTCUT
        actionAdd_Breakpoint->setShortcut(QApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen_Folder->setText(QApplication::translate("MainWindow", "Open Folder", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen_Folder->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionCompile->setText(QApplication::translate("MainWindow", "Compile", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCompile->setShortcut(QApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_NO_SHORTCUT
        tabWidget->setTabText(tabWidget->indexOf(CodeOutputTab), QApplication::translate("MainWindow", "CodeOutput", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ErrorTab), QApplication::translate("MainWindow", "Errors", nullptr));
        InfoTabs->setTabText(InfoTabs->indexOf(RegisterTab), QApplication::translate("MainWindow", "Register", nullptr));
        InfoTabs->setTabText(InfoTabs->indexOf(MemoryTab), QApplication::translate("MainWindow", "Memory", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuProgram->setTitle(QApplication::translate("MainWindow", "Processor", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
