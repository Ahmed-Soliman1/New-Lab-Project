#include "productmanagement.h"
#include "ui_productmanagement.h"

ProductManagement::ProductManagement(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ProductManagement)
{
    ui->setupUi(this);
}

ProductManagement::~ProductManagement()
{
    delete ui;
}
