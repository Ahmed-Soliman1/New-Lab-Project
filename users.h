#ifndef USERS_H
#define USERS_H

#include <QDialog>
#include <QString>

extern QString usernames[100];
extern QString passwords[100];
extern QString CardName[100];
extern QString CardNumber[100];
extern QString CVV[100];
extern int ages[100];
extern int usersCount;
extern bool UserType[100];


namespace Ui {
class Users;
}

class Users : public QDialog
{
    Q_OBJECT

public:
    explicit Users(QWidget *parent = nullptr);
    ~Users();

private:
    Ui::Users *ui;
};

#endif // USERS_H
