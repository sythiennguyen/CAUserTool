#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    void SetParentWindow(MainWindow* mainWindow);
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();
    void reject();
private slots:
    void on_pushButton_Login_clicked();

    void on_pushButton_Forget_clicked();

private:
    Ui::LoginDialog *ui;
    MainWindow *mainParentForm;
};

#endif // LOGINDIALOG_H
