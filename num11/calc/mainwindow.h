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
    ~MainWindow();

private slots:
    void on_zero_btn_clicked();
    void on_one_btn_clicked();
    void on_two_btn_clicked();
    void on_three_btn_clicked();
    void on_four_btn_clicked();
    void on_five_btn_clicked();
    void on_six_btn_clicked();
    void on_seven_btn_clicked();
    void on_eight_btn_clicked();
    void on_nine_btn_clicked();
    void on_plus_btn_clicked();
    void on_min_btn_clicked();
    void on_mult_btn_clicked();
    void on_divi_btn_clicked();
    void on_equal_btn_clicked();
    void on_AC_btn_clicked();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
