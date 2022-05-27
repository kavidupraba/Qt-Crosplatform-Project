/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timer
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *timer)
    {
        if (timer->objectName().isEmpty())
            timer->setObjectName(QString::fromUtf8("timer"));
        timer->resize(800, 600);
        timer->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/imgs/64-647021_light-colour-background-hd.jpg);"));
        centralwidget = new QWidget(timer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 171, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 171, 51));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-right-color: rgb(255, 0, 127);\n"
"border-left-color: rgb(255, 0, 127);\n"
"border-bottom-color: rgb(255, 0, 127);\n"
"border-top-color: rgb(255, 0, 127);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 320, 721, 181));
        label_3->setFont(font);
        label4 = new QLabel(centralwidget);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(290, 10, 131, 131));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 120, 151, 121));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(560, 160, 151, 121));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(560, 0, 151, 121));
        timer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(timer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        timer->setMenuBar(menubar);
        statusbar = new QStatusBar(timer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        timer->setStatusBar(statusbar);

        retranslateUi(timer);

        QMetaObject::connectSlotsByName(timer);
    } // setupUi

    void retranslateUi(QMainWindow *timer)
    {
        timer->setWindowTitle(QCoreApplication::translate("timer", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("timer", "<html><head/><body><p align=\"center\">Do not forget to have a sip of water </p><p align=\"center\">while you are staying in front of the machine all day long...</p><p align=\"center\">Strech out once in a while to make your spine feel good.</p><p align=\"center\">Make sure all your tasks for the day are done.</p></body></html>", nullptr));
        label4->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class timer: public Ui_timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
