#ifndef UPDATEPROFILEDIALOG_H
#define UPDATEPROFILEDIALOG_H

#include <QDialog>

namespace Ui {
class UpdateProfileDialog;
}

class UpdateProfileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateProfileDialog(QWidget *parent = 0);
    ~UpdateProfileDialog();

private:
    Ui::UpdateProfileDialog *ui;
};

#endif // UPDATEPROFILEDIALOG_H
