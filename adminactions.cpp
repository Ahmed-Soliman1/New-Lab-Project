#include "adminactions.h"
#include "ui_adminactions.h"

adminactions::adminactions(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminactions)
{
    ui->setupUi(this);
}

adminactions::~adminactions()
{
    delete ui;
}
