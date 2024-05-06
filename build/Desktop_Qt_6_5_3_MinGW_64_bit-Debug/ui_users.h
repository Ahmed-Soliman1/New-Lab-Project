/********************************************************************************
** Form generated from reading UI file 'users.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERS_H
#define UI_USERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Users
{
public:
    QLabel *label;
    QPushButton *browseButton;

    void setupUi(QDialog *Users)
    {
        if (Users->objectName().isEmpty())
            Users->setObjectName("Users");
        Users->resize(400, 300);
        label = new QLabel(Users);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 271, 31));
        browseButton = new QPushButton(Users);
        browseButton->setObjectName("browseButton");
        browseButton->setGeometry(QRect(30, 200, 151, 32));

        retranslateUi(Users);

        QMetaObject::connectSlotsByName(Users);
    } // setupUi

    void retranslateUi(QDialog *Users)
    {
        Users->setWindowTitle(QCoreApplication::translate("Users", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Users", "hello normal user ", nullptr));
        browseButton->setText(QCoreApplication::translate("Users", "browse products ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Users: public Ui_Users {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERS_H
