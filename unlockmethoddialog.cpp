#include "unlockmethoddialog.h"
#include "ui_unlockmethoddialog.h"

UnlockMethodDialog::UnlockMethodDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UnlockMethodDialog)
{
    ui->setupUi(this);
}

UnlockMethodDialog::~UnlockMethodDialog()
{
    delete ui;
}

void UnlockMethodDialog::on_label_ChangeInfo_linkActivated(const QString &link)
{

}
