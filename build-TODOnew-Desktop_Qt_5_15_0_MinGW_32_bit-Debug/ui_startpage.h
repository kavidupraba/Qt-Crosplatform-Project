/********************************************************************************
** Form generated from reading UI file 'startpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTPAGE_H
#define UI_STARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startpage
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *startpage)
    {
        if (startpage->objectName().isEmpty())
            startpage->setObjectName(QString::fromUtf8("startpage"));
        startpage->resize(800, 600);
        centralwidget = new QWidget(startpage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(590, 270, 181, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft JhengHei UI Light"));
        font.setPointSize(22);
        label_2->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 140, 321, 151));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft JhengHei UI Light"));
        font1.setPointSize(48);
        label->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 360, 181, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft JhengHei UI Light"));
        font2.setPointSize(16);
        pushButton->setFont(font2);
        startpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(startpage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        startpage->setMenuBar(menubar);
        statusbar = new QStatusBar(startpage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        startpage->setStatusBar(statusbar);

        retranslateUi(startpage);

        QMetaObject::connectSlotsByName(startpage);
    } // setupUi

    void retranslateUi(QMainWindow *startpage)
    {
        startpage->setWindowTitle(QCoreApplication::translate("startpage", "startpage", nullptr));
        label_2->setText(QCoreApplication::translate("startpage", "Be Reminded", nullptr));
        label->setText(QCoreApplication::translate("startpage", "<html><head/><body><p align=\"center\"><span style=\" font-size:72pt;\">MINDY</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("startpage", "Let's Get Started", nullptr));
    } // retranslateUi

};

namespace Ui {
    class startpage: public Ui_startpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTPAGE_H
