/********************************************************************************
** Form generated from reading UI file 'nameform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMEFORM_H
#define UI_NAMEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nameform
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nameform)
    {
        if (nameform->objectName().isEmpty())
            nameform->setObjectName(QString::fromUtf8("nameform"));
        nameform->resize(800, 600);
        centralwidget = new QWidget(nameform);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 290, 91, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font.setPointSize(10);
        pushButton->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 430, 191, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft JhengHei UI Light"));
        font1.setPointSize(16);
        label_3->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 340, 271, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft JhengHei UI Light"));
        font2.setPointSize(14);
        pushButton_3->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 220, 161, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font3.setPointSize(14);
        label_4->setFont(font3);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(600, 290, 91, 41));
        pushButton_2->setFont(font);
        dockWidget = new QDockWidget(centralwidget);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setGeometry(QRect(30, -20, 681, 481));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 220, 171, 41));
        lineEdit_2->setFont(font3);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 80, 491, 101));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft JhengHei UI Light"));
        font4.setPointSize(11);
        label->setFont(font4);
        nameform->setCentralWidget(centralwidget);
        dockWidget->raise();
        pushButton_3->raise();
        label->raise();
        lineEdit_2->raise();
        label_3->raise();
        label_4->raise();
        pushButton->raise();
        pushButton_2->raise();
        menubar = new QMenuBar(nameform);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        nameform->setMenuBar(menubar);
        statusbar = new QStatusBar(nameform);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        nameform->setStatusBar(statusbar);

        retranslateUi(nameform);

        QMetaObject::connectSlotsByName(nameform);
    } // setupUi

    void retranslateUi(QMainWindow *nameform)
    {
        nameform->setWindowTitle(QCoreApplication::translate("nameform", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("nameform", "OK", nullptr));
        label_3->setText(QCoreApplication::translate("nameform", "<html><head/><body><p><span style=\" font-size:10pt;\">Copyright </span><span style=\" font-family:'Montserrat','sans-serif'; font-size:10pt; color:#e9ebef; background-color:#0d1f2d;\">\302\251</span><span style=\" font-size:10pt;\"> 2020 MINDY team</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("nameform", "I am a User Already", nullptr));
        label_4->setText(QCoreApplication::translate("nameform", "Enter Your name :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("nameform", "Cancel", nullptr));
        lineEdit_2->setText(QString());
        label->setText(QCoreApplication::translate("nameform", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt;\">Make sure you won't forget essential tasks anymore</span></p><p align=\"right\"><span style=\" font-size:14pt;\">with </span><span style=\" font-size:14pt; font-weight:600;\">MINDY</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nameform: public Ui_nameform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMEFORM_H
