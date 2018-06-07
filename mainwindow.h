#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void UpdateUI();
    ~MainWindow();
private slots:
      void slotShowEvent();

      void on_radioButton_Organ_Open_clicked();

      void on_radioButton_Personal_Open_clicked();

      void on_radioButton_Organ_clicked();

      void on_radioButton_Personal_clicked();

      void on_pushButton_ResetCapchar_clicked();

private:
    Ui::MainWindow *ui;
    int capcharId;
    const QList<QString> capcharList = {"2bg48",\
                                        "3b4we",\
                                        "3w2bw",\
                                        "5bgp2",\
                                        "2enf4",\
                                        "5g5e5",\
                                        "2mpnn",\
                                        "3dgmf",\
                                        "3n3cf",\
                                        "4egem",\
                                        "3x325",\
                                        "4gycb",\
                                        "3ye2e",\
                                        "3n7mx",\
                                        "3wnd3",\
                                        "2gyb6",\
                                        "4f8yp",\
                                        "2fxgd",\
                                        "3ym7f",\
                                        "2xc2n",\
                                        "4cn7b",\
                                        "4ynf3",\
                                        "4c8n8",\
                                        "2cgyx",\
                                        "5ep3n",\
                                        "2x7bm",\
                                        "4gb3f",\
                                        "2npg6",\
                                        "5gcd3",\
                                        "2pfpn",\
                                        "3d7bd",\
                                        "3pe4g",\
                                        "4ycex",\
                                        "2en7g",\
                                        "5bnd7",\
                                        "3n2b4",\
                                        "4w6mw",\
                                        "5expp",\
                                        "2cegf",\
                                        "3den6",\
                                        "5dxnm",\
                                        "3g2w6",\
                                        "5bb66",\
                                        "2wc38",\
                                        "3p67n",\
                                        "3eny7",\
                                        "4n2yg",\
                                        "3x5fm",\
                                        "4fp5g",\
                                        "3bd8f",\
                                        "3nnpw",\
                                        "2cg58",\
                                        "2nbcx",\
                                        "5f3gf",\
                                        "4nnf3",\
                                        "4nc37",\
                                        "3xng6",\
                                        "2b827",\
                                        "m2576",\
                                        "4w76g",\
                                        "3fbxd",\
                                        "3bnyf",\
                                        "3ndxd",\
                                        "2mg87",\
                                        "3ebnn",\
                                        "2p2y8",\
                                        "4yc85",\
                                        "3xcgg",\
                                        "3nw7w",\
                                        "4b2pw",\
                                        "2n73f",\
                                        "2nf26",\
                                        "2w4y7",\
                                        "4cfw8",\
                                        "2g7nm",\
                                        "3ebpw",\
                                        "4d22m",\
                                        "2nx38",\
                                        "2g783",\
                                        "3ygde",\
                                        "4n3mn",\
                                        "3mxdn",\
                                        "5fyem",\
                                        "3bx86",\
                                        "4dgf7",\
                                        "3c7de",\
                                        "5bg8f",\
                                        "4fc36",\
                                        "2yggg",\
                                        "3bnfnd",\
                                        "3nfdn",\
                                        "3ny45",\
                                        "3cpwb",\
                                        "5mcy7",\
                                        "2wx73",\
                                        "4dw3w",\
                                        "2ycn8",\
                                        "4m2w5",\
                                        "3p4nn",\
                                        "4exnn"};
};

#endif // MAINWINDOW_H
