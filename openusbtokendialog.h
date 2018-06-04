#ifndef OPENUSBTOKENDIALOG_H
#define OPENUSBTOKENDIALOG_H

#include <QDialog>

namespace Ui {
class OpenUSBTokenDialog;
}

class OpenUSBTokenDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OpenUSBTokenDialog(QWidget *parent = 0);
    ~OpenUSBTokenDialog();

private:
    Ui::OpenUSBTokenDialog *ui;
};

#endif // OPENUSBTOKENDIALOG_H
