/********************************************************************************
** Form generated from reading UI file 'productmanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTMANAGEMENT_H
#define UI_PRODUCTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ProductManagement
{
public:

    void setupUi(QDialog *ProductManagement)
    {
        if (ProductManagement->objectName().isEmpty())
            ProductManagement->setObjectName("ProductManagement");
        ProductManagement->resize(515, 382);

        retranslateUi(ProductManagement);

        QMetaObject::connectSlotsByName(ProductManagement);
    } // setupUi

    void retranslateUi(QDialog *ProductManagement)
    {
        ProductManagement->setWindowTitle(QCoreApplication::translate("ProductManagement", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductManagement: public Ui_ProductManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTMANAGEMENT_H
