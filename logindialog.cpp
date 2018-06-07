#include "logindialog.h"
#include "ui_logindialog.h"
#include "qmessagebox.h"
#include "QDesktopWidget"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
void LoginDialog::SetParentWindow(MainWindow* mainWindow)
{
    mainParentForm = mainWindow;
}
void LoginDialog::reject()
{
    mainParentForm->close();
    QDialog::reject();
}

void LoginDialog::on_pushButton_Login_clicked()
{

}

void LoginDialog::on_pushButton_Forget_clicked()
{
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width()-mainParentForm->width()) / 2;
    int y = (screenGeometry.height()-mainParentForm->height()) / 2;
    mainParentForm->move(x, y);
    mainParentForm->show();
    mainParentForm->UpdateUI();
    QDialog::reject();
}
