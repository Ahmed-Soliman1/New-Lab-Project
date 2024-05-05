/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *RegisterUsernameLineEdit;
    QLineEdit *RegisterPasswordLineEdit;
    QLineEdit *RetypeRegisterPasswordLineEdit;
    QLabel *ErrorExistingLabel;
    QLabel *ErrorMatchingLabel;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *CardNameLineEdit;
    QLineEdit *CardNumberLineEdit;
    QLineEdit *CVVLineEdit;
    QPushButton *pushButton;
    QPushButton *RegisterPushButton;
    QLabel *ErrorCardNoLabel;
    QLabel *ErrorCVVLabel;
    QLabel *ErrorCredentialsLabel;
    QGroupBox *DateofBirthGroupBox;
    QComboBox *MonthComboBox;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *DayLineEdit;
    QLineEdit *YearLineEdit;
    QLabel *ErrorAgeLabel;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(365, 517);
        label = new QLabel(RegisterWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 81, 20));
        label_2 = new QLabel(RegisterWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 70, 81, 20));
        label_3 = new QLabel(RegisterWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 81, 20));
        RegisterUsernameLineEdit = new QLineEdit(RegisterWindow);
        RegisterUsernameLineEdit->setObjectName("RegisterUsernameLineEdit");
        RegisterUsernameLineEdit->setGeometry(QRect(100, 40, 141, 22));
        RegisterPasswordLineEdit = new QLineEdit(RegisterWindow);
        RegisterPasswordLineEdit->setObjectName("RegisterPasswordLineEdit");
        RegisterPasswordLineEdit->setGeometry(QRect(100, 70, 141, 22));
        RegisterPasswordLineEdit->setEchoMode(QLineEdit::Password);
        RetypeRegisterPasswordLineEdit = new QLineEdit(RegisterWindow);
        RetypeRegisterPasswordLineEdit->setObjectName("RetypeRegisterPasswordLineEdit");
        RetypeRegisterPasswordLineEdit->setGeometry(QRect(100, 100, 141, 22));
        RetypeRegisterPasswordLineEdit->setEchoMode(QLineEdit::Password);
        ErrorExistingLabel = new QLabel(RegisterWindow);
        ErrorExistingLabel->setObjectName("ErrorExistingLabel");
        ErrorExistingLabel->setGeometry(QRect(260, 40, 91, 16));
        ErrorMatchingLabel = new QLabel(RegisterWindow);
        ErrorMatchingLabel->setObjectName("ErrorMatchingLabel");
        ErrorMatchingLabel->setGeometry(QRect(260, 100, 81, 16));
        groupBox = new QGroupBox(RegisterWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 220, 251, 121));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 30, 41, 14));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 50, 51, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 70, 41, 14));
        CardNameLineEdit = new QLineEdit(groupBox);
        CardNameLineEdit->setObjectName("CardNameLineEdit");
        CardNameLineEdit->setGeometry(QRect(60, 30, 161, 16));
        CardNumberLineEdit = new QLineEdit(groupBox);
        CardNumberLineEdit->setObjectName("CardNumberLineEdit");
        CardNumberLineEdit->setGeometry(QRect(60, 50, 161, 16));
        CVVLineEdit = new QLineEdit(groupBox);
        CVVLineEdit->setObjectName("CVVLineEdit");
        CVVLineEdit->setGeometry(QRect(60, 70, 161, 16));
        pushButton = new QPushButton(RegisterWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 400, 80, 31));
        RegisterPushButton = new QPushButton(RegisterWindow);
        RegisterPushButton->setObjectName("RegisterPushButton");
        RegisterPushButton->setGeometry(QRect(250, 400, 80, 31));
        ErrorCardNoLabel = new QLabel(RegisterWindow);
        ErrorCardNoLabel->setObjectName("ErrorCardNoLabel");
        ErrorCardNoLabel->setGeometry(QRect(270, 270, 91, 16));
        ErrorCVVLabel = new QLabel(RegisterWindow);
        ErrorCVVLabel->setObjectName("ErrorCVVLabel");
        ErrorCVVLabel->setGeometry(QRect(270, 290, 81, 16));
        ErrorCredentialsLabel = new QLabel(RegisterWindow);
        ErrorCredentialsLabel->setObjectName("ErrorCredentialsLabel");
        ErrorCredentialsLabel->setGeometry(QRect(210, 440, 171, 16));
        DateofBirthGroupBox = new QGroupBox(RegisterWindow);
        DateofBirthGroupBox->setObjectName("DateofBirthGroupBox");
        DateofBirthGroupBox->setGeometry(QRect(10, 130, 221, 71));
        MonthComboBox = new QComboBox(DateofBirthGroupBox);
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->setObjectName("MonthComboBox");
        MonthComboBox->setGeometry(QRect(10, 40, 62, 22));
        label_7 = new QLabel(DateofBirthGroupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 20, 41, 14));
        label_8 = new QLabel(DateofBirthGroupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(80, 20, 41, 14));
        label_9 = new QLabel(DateofBirthGroupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(150, 20, 41, 14));
        DayLineEdit = new QLineEdit(DateofBirthGroupBox);
        DayLineEdit->setObjectName("DayLineEdit");
        DayLineEdit->setGeometry(QRect(80, 40, 51, 22));
        YearLineEdit = new QLineEdit(DateofBirthGroupBox);
        YearLineEdit->setObjectName("YearLineEdit");
        YearLineEdit->setGeometry(QRect(150, 40, 61, 22));
        ErrorAgeLabel = new QLabel(RegisterWindow);
        ErrorAgeLabel->setObjectName("ErrorAgeLabel");
        ErrorAgeLabel->setGeometry(QRect(240, 170, 121, 20));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWindow", "Passwod", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWindow", "Retype Password", nullptr));
        ErrorExistingLabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Already Existing</span></p></body></html>", nullptr));
        ErrorMatchingLabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Not Matching</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Credit Card Information", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterWindow", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterWindow", "Card No.", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterWindow", "CVV", nullptr));
        CardNameLineEdit->setText(QString());
        CardNumberLineEdit->setText(QString());
        CVVLineEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("RegisterWindow", "Back", nullptr));
        RegisterPushButton->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        ErrorCardNoLabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Invalid Card No.</span></p></body></html>", nullptr));
        ErrorCVVLabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Invalid CVV</span></p></body></html>", nullptr));
        ErrorCredentialsLabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Please fill all credentials</span></p></body></html>", nullptr));
        DateofBirthGroupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        MonthComboBox->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan", nullptr));
        MonthComboBox->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        MonthComboBox->setItemText(2, QCoreApplication::translate("RegisterWindow", "March", nullptr));
        MonthComboBox->setItemText(3, QCoreApplication::translate("RegisterWindow", "April", nullptr));
        MonthComboBox->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        MonthComboBox->setItemText(5, QCoreApplication::translate("RegisterWindow", "June", nullptr));
        MonthComboBox->setItemText(6, QCoreApplication::translate("RegisterWindow", "July", nullptr));
        MonthComboBox->setItemText(7, QCoreApplication::translate("RegisterWindow", "August", nullptr));
        MonthComboBox->setItemText(8, QCoreApplication::translate("RegisterWindow", "September", nullptr));
        MonthComboBox->setItemText(9, QCoreApplication::translate("RegisterWindow", "October", nullptr));
        MonthComboBox->setItemText(10, QCoreApplication::translate("RegisterWindow", "November", nullptr));
        MonthComboBox->setItemText(11, QCoreApplication::translate("RegisterWindow", "December", nullptr));

        label_7->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        label_9->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        ErrorAgeLabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Age is less than 18</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
