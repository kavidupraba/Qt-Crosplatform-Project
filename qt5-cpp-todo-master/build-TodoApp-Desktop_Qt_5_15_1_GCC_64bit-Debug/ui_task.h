/********************************************************************************
** Form generated from reading UI file 'task.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkbox;
    QSpacerItem *horizontalSpacer;
    QPushButton *editButton;
    QPushButton *removeButton;

    void setupUi(QWidget *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName(QString::fromUtf8("Task"));
        Task->resize(400, 300);
        Task->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/new/prefix1/imgs/1567832.jpg);\n"
""));
        horizontalLayout = new QHBoxLayout(Task);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkbox = new QCheckBox(Task);
        checkbox->setObjectName(QString::fromUtf8("checkbox"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font.setPointSize(12);
        checkbox->setFont(font);
        checkbox->setAutoFillBackground(false);
        checkbox->setStyleSheet(QString::fromUtf8("border-color: rgb(200, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(checkbox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        editButton = new QPushButton(Task);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setFont(font);
        editButton->setAutoFillBackground(false);
        editButton->setStyleSheet(QString::fromUtf8("border-color: rgb(200, 0, 0);\n"
"border-width:thick;\n"
"background-color:rgb(222, 170, 255);\n"
""));

        horizontalLayout->addWidget(editButton);

        removeButton = new QPushButton(Task);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setFont(font);
        removeButton->setAutoFillBackground(false);
        removeButton->setStyleSheet(QString::fromUtf8("border-color: rgb(200, 0, 0);\n"
"border-width:thick;\n"
"background-color:rgb(222, 170, 255);"));

        horizontalLayout->addWidget(removeButton);


        retranslateUi(Task);

        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QWidget *Task)
    {
        Task->setWindowTitle(QCoreApplication::translate("Task", "Form", nullptr));
        checkbox->setText(QCoreApplication::translate("Task", "Buy Milk", nullptr));
        editButton->setText(QCoreApplication::translate("Task", "Edit", nullptr));
        removeButton->setText(QCoreApplication::translate("Task", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
