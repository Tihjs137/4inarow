#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_A0_clicked();

    void on_B0_clicked();

    void on_C0_clicked();

    void on_D0_clicked();

    void on_E0_clicked();

    void on_F0_clicked();

    void on_G0_clicked();

    void on_Reset_clicked();

private:
    Ui::MainWindow *ui;

    void disable();
    void enable();

    QString checkWinner(QString myBoard[7][6]);

    void drawBoard(QString myBoard[7][6]);

};
#endif // MAINWINDOW_H
