#include "useractions.h"
#include "ui_useractions.h"

userActions::userActions(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::userActions)
{
    ui->setupUi(this);
}

userActions::~userActions()
{
    delete ui;
}
