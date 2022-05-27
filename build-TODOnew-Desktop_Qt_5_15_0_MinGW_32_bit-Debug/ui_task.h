/********************************************************************************
** Form generated from reading UI file 'task.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task
{
public:
    QPushButton *editButton;
    QCheckBox *checkbox;
    QPushButton *removeButton;

    void setupUi(QWidget *task)
    {
        if (task->objectName().isEmpty())
            task->setObjectName(QString::fromUtf8("task"));
        task->resize(528, 347);
        editButton = new QPushButton(task);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(250, 150, 75, 23));
        checkbox = new QCheckBox(task);
        checkbox->setObjectName(QString::fromUtf8("checkbox"));
        checkbox->setGeometry(QRect(100, 150, 61, 17));
        removeButton = new QPushButton(task);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(567, 299, 75, 23));

        retranslateUi(task);

        QMetaObject::connectSlotsByName(task);
    } // setupUi

    void retranslateUi(QWidget *task)
    {
        task->setWindowTitle(QCoreApplication::translate("task", "Form", nullptr));
        editButton->setText(QCoreApplication::translate("task", "Edit", nullptr));
        checkbox->setText(QCoreApplication::translate("task", "Buy Milk", nullptr));
        removeButton->setText(QCoreApplication::translate("task", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task: public Ui_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
