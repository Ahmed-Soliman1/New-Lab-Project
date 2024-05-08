#include "loginwindow.h"

#include "ui_loginwindow.h"
#include "users.h"
#include "registerwindow.h"
#include"adminactions.h"
#include"useractions.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->LoginErrorLabel->setVisible(false);

}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_LoginButton_clicked()
{
    QString UserEnteredUsername=ui->UsernameLineEdit->text();
    QString UserEnteredPassword=ui->PasswordLineEdit->text();
    int index;
    bool found=false;
    for (int i=0;i<usersCount;i++){
        if(UserEnteredUsername==usernames[i]){
            index=i;
            found=true;
        }
    }
    bool flag=(UserEnteredPassword==passwords[index]);
    if(found){
        if(flag){

           if (UserType[index]){
                hide();
                adminactions * admin = new adminactions();
                admin->show();
            }

            else if (!UserType[index]){
               hide();
               userActions * user = new userActions();
                user->show();

            }


             //Here add the next window if login is successful


        }
    }
    if((!found) or(!flag)){
        ui->LoginErrorLabel->setVisible(true);
    }

}






void LoginWindow::on_RegisterButton_clicked()
{
    hide();
    RegisterWindow* registerwindow=new RegisterWindow(this);
    registerwindow->show();
}


void LoginWindow::on_pushButton_clicked()
{
    hide();
    adminactions * admin = new adminactions();
    admin->show();
}



void LoginWindow::on_pushButton_2_clicked()
{
    hide();
    userActions * user = new userActions();
    user->show();
}

