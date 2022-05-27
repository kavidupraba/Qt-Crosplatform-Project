/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *tasksLayout;
    QHBoxLayout *toolbarLayout;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *addTaskButton;
    QSpacerItem *verticalSpacer;
    QPushButton *aboutusbutton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 446);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/imgs/64-647021_light-colour-background-hd.jpg);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tasksLayout = new QVBoxLayout();
        tasksLayout->setSpacing(6);
        tasksLayout->setObjectName(QString::fromUtf8("tasksLayout"));

        verticalLayout->addLayout(tasksLayout);

        toolbarLayout = new QHBoxLayout();
        toolbarLayout->setSpacing(6);
        toolbarLayout->setObjectName(QString::fromUtf8("toolbarLayout"));
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font.setPointSize(12);
        statusLabel->setFont(font);
        statusLabel->setStyleSheet(QString::fromUtf8("border-color: rgb(200, 0, 0);\n"
"border-width:thick;\n"
"background-color:rgb(222, 170, 255);\n"
""));

        toolbarLayout->addWidget(statusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        toolbarLayout->addItem(horizontalSpacer);

        addTaskButton = new QPushButton(centralWidget);
        addTaskButton->setObjectName(QString::fromUtf8("addTaskButton"));
        addTaskButton->setFont(font);
        addTaskButton->setStyleSheet(QString::fromUtf8("border-color: rgb(200, 0, 0);\n"
"border-width:thick;\n"
"background-color:rgb(222, 170, 255);"));

        toolbarLayout->addWidget(addTaskButton);


        verticalLayout->addLayout(toolbarLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        aboutusbutton = new QPushButton(centralWidget);
        aboutusbutton->setObjectName(QString::fromUtf8("aboutusbutton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft JhengHei UI Light"));
        font1.setPointSize(14);
        aboutusbutton->setFont(font1);
        aboutusbutton->setStyleSheet(QString::fromUtf8("border-color: rgb(200, 0, 0);\n"
"border-width:thick;\n"
"background-color:rgb(222, 170, 255);"));

        verticalLayout->addWidget(aboutusbutton);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Todo", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "Status: 0 todo/0 done", nullptr));
        addTaskButton->setText(QCoreApplication::translate("MainWindow", "Add task", nullptr));
        aboutusbutton->setText(QCoreApplication::translate("MainWindow", "A   B    O    U    T             U    S", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
