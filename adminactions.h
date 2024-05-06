#ifndef ADMINACTIONS_H
#define ADMINACTIONS_H

#include <QDialog>

namespace Ui {
class adminactions;
}

class adminactions : public QDialog
{
    Q_OBJECT

public:
    explicit adminactions(QWidget *parent = nullptr);
    ~adminactions();

private:
    Ui::adminactions *ui;
};

#endif // ADMINACTIONS_H
