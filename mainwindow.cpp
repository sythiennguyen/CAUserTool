#include "mainwindow.h"
#include "logindialog.h"
#include "ui_mainwindow.h"
#include <QtGui>

LoginDialog *loginForm;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer::singleShot(0, this, SLOT(slotShowEvent()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotShowEvent()
{
    if(!loginForm)
    {
        loginForm = new LoginDialog();
    }
    if(loginForm)
    {
        loginForm->SetParentWindow(this);
        loginForm->show();
        this->hide();
    }
}
