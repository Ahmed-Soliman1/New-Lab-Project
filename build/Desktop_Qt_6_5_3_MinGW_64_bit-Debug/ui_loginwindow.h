/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QPushButton *LoginButton;
    QPushButton *RegisterButton;
    QLineEdit *UsernameLineEdit;
    QLineEdit *PasswordLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *LoginErrorLabel;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(340, 359);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(60, 250, 80, 31));
        RegisterButton = new QPushButton(centralwidget);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setGeometry(QRect(200, 250, 80, 31));
        UsernameLineEdit = new QLineEdit(centralwidget);
        UsernameLineEdit->setObjectName("UsernameLineEdit");
        UsernameLineEdit->setGeometry(QRect(130, 60, 141, 22));
        PasswordLineEdit = new QLineEdit(centralwidget);
        PasswordLineEdit->setObjectName("PasswordLineEdit");
        PasswordLineEdit->setGeometry(QRect(130, 100, 141, 22));
        PasswordLineEdit->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 60, 61, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 100, 51, 16));
        LoginErrorLabel = new QLabel(centralwidget);
        LoginErrorLabel->setObjectName("LoginErrorLabel");
        LoginErrorLabel->setGeometry(QRect(130, 160, 201, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 200, 80, 21));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 200, 80, 21));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 340, 19));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        LoginButton->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        RegisterButton->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        LoginErrorLabel->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">Error: Wrong username or password</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginWindow", "Admin", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginWindow", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
