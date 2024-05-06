#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "users.h"
#include "loginwindow.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->ErrorExistingLabel->setVisible(false);
    ui->ErrorMatchingLabel->setVisible(false);
    ui->ErrorCardNoLabel->setVisible(false);
    ui->ErrorCVVLabel->setVisible(false);
    ui->ErrorCredentialsLabel->setVisible(false);
    ui->ErrorAgeLabel->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_RegisterPushButton_clicked()
{
    ui->ErrorExistingLabel->setVisible(false);
    ui->ErrorMatchingLabel->setVisible(false);
    ui->ErrorCardNoLabel->setVisible(false);
    ui->ErrorCVVLabel->setVisible(false);
    ui->ErrorCredentialsLabel->setVisible(false);

    bool matching=false;
    bool existing=false;
    bool credentials=false;
    bool ageError=false;
    bool InvalidCardNO=false;
    bool InvalidCVV=false;

    QString UserEnteredRegisterUsername = ui->RegisterUsernameLineEdit->text();
    QString UserEnteredRegisterPassword = ui->RegisterPasswordLineEdit->text();
    QString retypePassword = ui->RetypeRegisterPasswordLineEdit->text();
    QString UserEnteredYear = ui->YearLineEdit->text();
    QString UserEnteredCardName= ui->CardNameLineEdit->text();
    QString UserEnteredCardNumber=ui->CardNumberLineEdit->text();
    QString UserEnteredCVV= ui->CVVLineEdit->text();


    if ((UserEnteredRegisterUsername.isEmpty()) or (UserEnteredRegisterPassword.isEmpty()) or (retypePassword.isEmpty()) or (UserEnteredYear.isEmpty())) {
        credentials=true;
    }


    int year=UserEnteredYear.toInt();
    int RegisterAge = 2024-year;



    if (RegisterAge < 18) {
        ageError=true;
    }


    if (UserEnteredRegisterPassword != retypePassword) {
        matching=true;
    }


    for (int i = 0; i < usersCount; ++i) {
        if (usernames[i] == UserEnteredRegisterUsername) {
            existing=true;

        }
    }

    if (!(UserEnteredCardNumber.isEmpty())){
        if (UserEnteredCardNumber.length() != 16)
            InvalidCardNO=true;

        for (const QChar &ch : UserEnteredCardNumber) {
            if (!ch.isDigit()) {
                InvalidCardNO = true;
                break;
        }
    }
    }
    if (!(UserEnteredCVV.isEmpty())){
        if (UserEnteredCVV.length() != 3)
            InvalidCVV=true;

        for (const QChar &ch : UserEnteredCVV) {
            if (!ch.isDigit()) {
                InvalidCVV = true;
                break;
                }
        }
    }



    if((matching)||(existing)||(credentials)||(ageError)||(InvalidCardNO)||(InvalidCVV)){
        if (matching) {
            ui->ErrorMatchingLabel->setVisible(true);
        }
        if (existing) {
            ui->ErrorExistingLabel->setVisible(true);
        }
        if (credentials) {
            ui->ErrorCredentialsLabel->setVisible(true);
        }
        if (ageError) {
            ui->ErrorAgeLabel->setVisible(true);
        }
        if (InvalidCVV) {
            ui->ErrorCVVLabel->setVisible(true);
        }
        if (InvalidCardNO) {
            ui->ErrorCardNoLabel->setVisible(true);
        }
        return;

    }


    usernames[usersCount-1] = UserEnteredRegisterUsername;
    passwords[usersCount-1] = UserEnteredRegisterPassword;
    ages[usersCount-1] = RegisterAge;
    CardName[usersCount-1] = UserEnteredCardName;
    CardNumber[usersCount-1]=UserEnteredCardNumber;
    CVV[usersCount-1]=UserEnteredCVV;
    UserType[usersCount-1]=false;
    usersCount++;




    hide();
    LoginWindow *loginwindow = new LoginWindow();
    loginwindow->show();
}


void RegisterWindow::on_pushButton_clicked()
{
    hide();
    LoginWindow *loginwindow = new LoginWindow();
    loginwindow->show();

}

