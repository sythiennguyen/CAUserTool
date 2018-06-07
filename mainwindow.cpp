#include "mainwindow.h"
#include "logindialog.h"
#include "ui_mainwindow.h"
#include <QtGui>

LoginDialog *loginForm;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qsrand(QDateTime::currentMSecsSinceEpoch() / 1000);
    capcharId = qrand() % 100;
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

void MainWindow::on_radioButton_Organ_Open_clicked()
{
    QLabel* labelText = this->findChild<QLabel*>("label_PTaxNumber_Open");
    labelText->setText(QString("Mã Số Thuế"));
    labelText->setAlignment(Qt::AlignRight);
}

void MainWindow::on_radioButton_Personal_Open_clicked()
{
    QLabel* labelText = this->findChild<QLabel*>("label_PTaxNumber_Open");
    labelText->setText(QString("Số Chứng minh thư"));
    labelText->setAlignment(Qt::AlignRight);
}

void MainWindow::on_radioButton_Organ_clicked()
{
    QLabel* labelText = this->findChild<QLabel*>("label_PTaxNumber");
    labelText->setText(QString("Mã Số Thuế"));
    labelText->setAlignment(Qt::AlignRight);
}

void MainWindow::on_radioButton_Personal_clicked()
{
    QLabel* labelText = this->findChild<QLabel*>("label_PTaxNumber");
    labelText->setText(QString("Số Chứng minh thư"));
    labelText->setAlignment(Qt::AlignRight);
}

void MainWindow::on_pushButton_ResetCapchar_clicked()
{
    while(true)
    {
        qsrand(QDateTime::currentMSecsSinceEpoch() / 1000);
        int randomNumber = qrand()%100;
        if (randomNumber != capcharId)
        {
            capcharId = randomNumber;
            break;
        }
    }
    UpdateUI();
}
void MainWindow::UpdateUI()
{
    QPixmap image(":/capchar/" + capcharList[capcharId] + ".png");
    QLabel* capcharImage = this->findChild<QLabel*>("label_CapcharImage");
    capcharImage->setPixmap(image);
}
