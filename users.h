#ifndef USERS_H
#define USERS_H

#include <QDialog>
#include <QString>
#include <vector>

extern std::vector<QString> usernames;
extern std::vector<QString> passwords;
extern std::vector<QString> CardName;
extern std::vector<QString> CardNumber;
extern std::vector<QString> CVV;
extern std::vector<int> ages;
extern std::vector<bool> UserType;

extern int usersCount;

namespace Ui {
class Users;
}

class Users : public QDialog
{
    Q_OBJECT

public:
    explicit Users(QWidget *parent = nullptr);
    ~Users();

private slots:
    void removeUser();

private:
    void populateTable();
    Ui::Users *ui;
};

#endif // USERS_H
