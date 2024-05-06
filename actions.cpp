#include "actions.h"
#include "ui_actions.h"

actions::actions(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::actions)
{
    ui->setupUi(this);
}

actions::~actions()
{
    delete ui;
}
