/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(936, 524);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 180, 51);"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40, 40);\n"
"color: rgb(255, 255, 255);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 555, 450));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(350, 0));
        listWidget->setMaximumSize(QSize(200, 16777215));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40, 40);\n"
"color: rgb(255, 180, 51);\n"
"selection-color: rgb(255, 0, 4);\n"
"selection-background-color: rgb(0, 255, 21);\n"
"alternate-background-color: rgb(50, 35, 255);\n"
"gridline-color: rgb(255, 47, 255);"));
        listWidget->setDragEnabled(false);
        listWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        listWidget->setDefaultDropAction(Qt::CopyAction);
        listWidget->setIconSize(QSize(50, 30));
        listWidget->setViewMode(QListView::ListMode);

        horizontalLayout->addWidget(listWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 936, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addAction(action_3);
        menu_2->addAction(action_4);
        menu_2->addAction(action_5);
        menu_2->addAction(action_6);
        menu_2->addAction(action_7);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ImageViewer", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\320\221\320\276\320\273\321\214\321\210\320\265", nullptr));
#if QT_CONFIG(shortcut)
        action_4->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_5->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\214\321\210\320\265", nullptr));
#if QT_CONFIG(shortcut)
        action_5->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        action_6->setText(QCoreApplication::translate("MainWindow", "\320\236\321\200\320\270\320\263\320\270\320\275\320\260\320\273", nullptr));
#if QT_CONFIG(shortcut)
        action_6->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        action_7->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\276\320\263\320\275\320\260\321\202\321\214 \321\200\320\260\320\267\320\274\320\265\321\200", nullptr));
#if QT_CONFIG(shortcut)
        action_7->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
