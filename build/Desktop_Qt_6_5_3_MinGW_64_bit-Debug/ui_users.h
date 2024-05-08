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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Users
{
public:
    QPushButton *browseButton;
    QTableWidget *userTableWidget;
    QPushButton *removeUserButton;

    void setupUi(QDialog *Users)
    {
        if (Users->objectName().isEmpty())
            Users->setObjectName("Users");
        Users->resize(637, 483);
        browseButton = new QPushButton(Users);
        browseButton->setObjectName("browseButton");
        browseButton->setGeometry(QRect(60, 410, 151, 32));
        userTableWidget = new QTableWidget(Users);
        userTableWidget->setObjectName("userTableWidget");
        userTableWidget->setGeometry(QRect(50, 40, 531, 311));
        removeUserButton = new QPushButton(Users);
        removeUserButton->setObjectName("removeUserButton");
        removeUserButton->setGeometry(QRect(450, 420, 80, 21));

        retranslateUi(Users);

        QMetaObject::connectSlotsByName(Users);
    } // setupUi

    void retranslateUi(QDialog *Users)
    {
        Users->setWindowTitle(QCoreApplication::translate("Users", "Dialog", nullptr));
        browseButton->setText(QCoreApplication::translate("Users", "browse products ", nullptr));
        removeUserButton->setText(QCoreApplication::translate("Users", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Users: public Ui_Users {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERS_H
