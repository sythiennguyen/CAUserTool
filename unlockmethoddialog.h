#ifndef UNLOCKMETHODDIALOG_H
#define UNLOCKMETHODDIALOG_H

#include <QDialog>

namespace Ui {
class UnlockMethodDialog;
}

class UnlockMethodDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UnlockMethodDialog(QWidget *parent = 0);
    ~UnlockMethodDialog();

private:
    Ui::UnlockMethodDialog *ui;
};

#endif // UNLOCKMETHODDIALOG_H
