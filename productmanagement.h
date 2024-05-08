#ifndef PRODUCTMANAGEMENT_H
#define PRODUCTMANAGEMENT_H

#include <QDialog>

namespace Ui {
class ProductManagement;
}

class ProductManagement : public QDialog
{
    Q_OBJECT

public:
    explicit ProductManagement(QWidget *parent = nullptr);
    ~ProductManagement();

private:
    Ui::ProductManagement *ui;
};

#endif // PRODUCTMANAGEMENT_H
