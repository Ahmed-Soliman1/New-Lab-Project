#include "users.h"
#include "ui_users.h"

std::vector<QString> usernames = {"admin", "test", "user1", "user2"};
std::vector<QString> passwords = {"admin", "1234", "1101", "1102"};
std::vector<QString> CardName = {"Abdelrahman Amer", "Ahmed Amgad", "Adham", "Zeyad Maher"};
std::vector<QString> CardNumber = {"1234567891011234", "1234567891011432", "1234567891011342", "2345678888888129"};
std::vector<QString> CVV = {"123", "132", "213", "231"};
std::vector<bool> UserType = {true, false, false, true}; // 1 represents admin, 0 represents regular user
std::vector<int> ages = {20, 21, 22, 23};
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
