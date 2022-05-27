/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *tasksLayout;
    QWidget *layoutWidget_2;
    QHBoxLayout *toolbarLayout;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *addTaskButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->resize(800, 600);
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(151, 62, 2, 2));
        tasksLayout = new QVBoxLayout(layoutWidget);
        tasksLayout->setObjectName(QString::fromUtf8("tasksLayout"));
        tasksLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(151, 62, 235, 25));
        toolbarLayout = new QHBoxLayout(layoutWidget_2);
        toolbarLayout->setObjectName(QString::fromUtf8("toolbarLayout"));
        toolbarLayout->setContentsMargins(0, 0, 0, 0);
        statusLabel = new QLabel(layoutWidget_2);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        toolbarLayout->addWidget(statusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        toolbarLayout->addItem(horizontalSpacer);

        addTaskButton = new QPushButton(centralwidget);
        addTaskButton->setObjectName(QString::fromUtf8("addTaskButton"));
        addTaskButton->setGeometry(QRect(390, 60, 201, 31));
        mainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        mainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainWindow->setStatusBar(statusbar);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "MainWindow", nullptr));
        statusLabel->setText(QCoreApplication::translate("mainWindow", "Status: 0 todo/0 done", nullptr));
        addTaskButton->setText(QCoreApplication::translate("mainWindow", "Add task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
