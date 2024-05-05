#include "users.h"
#include "ui_users.h"

QString usernames[100] = {"admin", "test", "user1", "user2"};
QString passwords[100] = {"admin", "1234", "1101", "1102"};
QString CardName[100] = {"Abdelrahman Amer","Ahmed Amgad","Adham","Zeyad Maher"};
QString CardNumber[100] = {"1234567891011234","1234567891011432","1234567891011342","2345678888888129"};
QString CVV[100] = {"123","132","213","231"};

bool UserType[100] = {true, false, false, true}; // 1 represents admin, 0 represents regular user
int ages[100] = {20, 21, 22, 23};
int usersCount = 4;

Users::Users(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Users)
{
    ui->setupUi(this);
}

Users::~Users()
{
    delete ui;
}
