#ifndef USERACTIONS_H
#define USERACTIONS_H

#include <QDialog>

namespace Ui {
class userActions;
}

class userActions : public QDialog
{
    Q_OBJECT

public:
    explicit userActions(QWidget *parent = nullptr);
    ~userActions();

private:
    Ui::userActions *ui;
};

#endif // USERACTIONS_H
