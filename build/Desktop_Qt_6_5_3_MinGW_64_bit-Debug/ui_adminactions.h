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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminactions
{
public:
    QPushButton *add;
    QPushButton *pushButton;

    void setupUi(QDialog *adminactions)
    {
        if (adminactions->objectName().isEmpty())
            adminactions->setObjectName("adminactions");
        adminactions->resize(400, 300);
        add = new QPushButton(adminactions);
        add->setObjectName("add");
        add->setGeometry(QRect(270, 210, 100, 32));
        pushButton = new QPushButton(adminactions);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 220, 121, 32));

        retranslateUi(adminactions);

        QMetaObject::connectSlotsByName(adminactions);
    } // setupUi

    void retranslateUi(QDialog *adminactions)
    {
        adminactions->setWindowTitle(QCoreApplication::translate("adminactions", "Dialog", nullptr));
        add->setText(QCoreApplication::translate("adminactions", "add product", nullptr));
        pushButton->setText(QCoreApplication::translate("adminactions", "delete product", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminactions: public Ui_adminactions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINACTIONS_H
