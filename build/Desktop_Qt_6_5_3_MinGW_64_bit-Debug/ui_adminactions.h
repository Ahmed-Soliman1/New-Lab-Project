/********************************************************************************
** Form generated from reading UI file 'adminactions.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINACTIONS_H
#define UI_ADMINACTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminactions
{
public:
    QPushButton *UserManagementPushButton;
    QPushButton *LogoutAdminPushButton;
    QLabel *ImageLabel;
    QPushButton *ProductManagementPushButton;

    void setupUi(QDialog *adminactions)
    {
        if (adminactions->objectName().isEmpty())
            adminactions->setObjectName("adminactions");
        adminactions->resize(400, 300);
        UserManagementPushButton = new QPushButton(adminactions);
        UserManagementPushButton->setObjectName("UserManagementPushButton");
        UserManagementPushButton->setGeometry(QRect(260, 230, 111, 41));
        LogoutAdminPushButton = new QPushButton(adminactions);
        LogoutAdminPushButton->setObjectName("LogoutAdminPushButton");
        LogoutAdminPushButton->setGeometry(QRect(20, 20, 121, 32));
        ImageLabel = new QLabel(adminactions);
        ImageLabel->setObjectName("ImageLabel");
        ImageLabel->setGeometry(QRect(140, 90, 191, 111));
        ProductManagementPushButton = new QPushButton(adminactions);
        ProductManagementPushButton->setObjectName("ProductManagementPushButton");
        ProductManagementPushButton->setGeometry(QRect(30, 230, 121, 41));

        retranslateUi(adminactions);

        QMetaObject::connectSlotsByName(adminactions);
    } // setupUi

    void retranslateUi(QDialog *adminactions)
    {
        adminactions->setWindowTitle(QCoreApplication::translate("adminactions", "Dialog", nullptr));
        UserManagementPushButton->setText(QCoreApplication::translate("adminactions", "User Management", nullptr));
        LogoutAdminPushButton->setText(QCoreApplication::translate("adminactions", "Logout", nullptr));
        ImageLabel->setText(QString());
        ProductManagementPushButton->setText(QCoreApplication::translate("adminactions", "Product Management", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminactions: public Ui_adminactions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINACTIONS_H
