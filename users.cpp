#include "users.h"
#include "ui_users.h"
#include <QListWidgetItem>
#include "adminactions.h"
#include "fileio.h"

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

    // Connect remove user button to removeUser slot
    connect(ui->removeUserButton, &QPushButton::clicked, this, &Users::removeUser);

    // Populate user table
    populateTable();
}

Users::~Users()
{
    delete ui;
}

void Users::populateTable()
{
    // Set up table headers
    QStringList headers;
    headers << "Username" << "Password" << "Card Name" << "Card Number" << "CVV" << "Age" << "User Type";
    ui->userTableWidget->setColumnCount(headers.size());
    ui->userTableWidget->setHorizontalHeaderLabels(headers);

    // Populate table with user data
    for (int i = 0; i < usernames.size(); ++i) {
        ui->userTableWidget->insertRow(ui->userTableWidget->rowCount());
        ui->userTableWidget->setItem(i, 0, new QTableWidgetItem(usernames[i]));
        ui->userTableWidget->setItem(i, 1, new QTableWidgetItem(passwords[i]));
        ui->userTableWidget->setItem(i, 2, new QTableWidgetItem(CardName[i]));
        ui->userTableWidget->setItem(i, 3, new QTableWidgetItem(CardNumber[i]));
        ui->userTableWidget->setItem(i, 4, new QTableWidgetItem(CVV[i]));
        ui->userTableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(ages[i])));
        QString userType = UserType[i] ? "Admin" : "Regular";
        ui->userTableWidget->setItem(i, 6, new QTableWidgetItem(userType));
    }
}

void Users::removeUser()
{
    // Remove selected user from the table
    int selectedRow = ui->userTableWidget->currentRow();
    if (selectedRow >= 0) {
        ui->userTableWidget->removeRow(selectedRow);
        // Remove user data
        usernames.erase(usernames.begin() + selectedRow);
        passwords.erase(passwords.begin() + selectedRow);
        CardName.erase(CardName.begin() + selectedRow);
        CardNumber.erase(CardNumber.begin() + selectedRow);
        CVV.erase(CVV.begin() + selectedRow);
        UserType.erase(UserType.begin() + selectedRow);
        ages.erase(ages.begin() + selectedRow);
        // Update user count
        usersCount--;
        saveUserDataToFile();
    }
}
