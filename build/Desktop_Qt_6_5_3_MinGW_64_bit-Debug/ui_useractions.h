/********************************************************************************
** Form generated from reading UI file 'useractions.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERACTIONS_H
#define UI_USERACTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_userActions
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *userActions)
    {
        if (userActions->objectName().isEmpty())
            userActions->setObjectName("userActions");
        userActions->resize(400, 300);
        pushButton = new QPushButton(userActions);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 210, 100, 32));
        label = new QLabel(userActions);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 151, 31));

        retranslateUi(userActions);

        QMetaObject::connectSlotsByName(userActions);
    } // setupUi

    void retranslateUi(QDialog *userActions)
    {
        userActions->setWindowTitle(QCoreApplication::translate("userActions", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("userActions", "browse", nullptr));
        label->setText(QCoreApplication::translate("userActions", "hello user", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userActions: public Ui_userActions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERACTIONS_H
