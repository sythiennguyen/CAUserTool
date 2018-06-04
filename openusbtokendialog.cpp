#include "openusbtokendialog.h"
#include "ui_openusbtoken.h"

OpenUSBTokenDialog::OpenUSBTokenDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenUSBTokenDialog)
{
    ui->setupUi(this);
}

OpenUSBTokenDialog::~OpenUSBTokenDialog()
{
    delete ui;
}
