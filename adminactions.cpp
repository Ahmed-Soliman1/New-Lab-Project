#include <fstream>
#include <sstream>
#include "fileio.h"
#include "adminactions.h"
#include "ui_adminactions.h"
#include "users.h"

adminactions::adminactions(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminactions)
{
    ui->setupUi(this);
    QPixmap pix(":/images/AdminImage.png");
    int w = ui->ImageLabel->width();
    int h = ui->ImageLabel->height();
    ui->ImageLabel->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    loadUserDataFromFile();
}

adminactions::~adminactions()
{
    delete ui;
}


void adminactions::on_UserManagementPushButton_clicked()
{
    hide();
    Users* users= new Users();
    users->show();
}

