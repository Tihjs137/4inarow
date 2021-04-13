#include "mainwindow.h"
#include "ui_mainwindow.h"

QString board[7][6];
QString nextPlayer = "⦿";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int x = 0; x != 7; x++)
    {
        for(int y = 0; y != 6; y++)
        {
            board[x][y] = " ";
        }
    }
    drawBoard(board);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::checkWinner(QString myBoard[7][6])
{
    //Horizontal
    for(int x = 0; x != 7 - 3; x++)
    {
        for(int y = 0; y != 6; y++)
        {
            if(myBoard[x][y] != " " && myBoard[x][y] == myBoard[x+1][y] && myBoard[x+1][y] == myBoard[x+2][y] && myBoard[x+2][y] == myBoard[x+3][y])
            {
                return myBoard[x][y];
            }
        }

    }

    //Vertical
    for(int x = 0; x != 7; x++)
    {
        for(int y = 0; y != 6 - 3; y++)
        {
            if(myBoard[x][y] != " " && myBoard[x][y] == myBoard[x][y+1] && myBoard[x][y+1] == myBoard[x][y+2] && myBoard[x][y+2] == myBoard[x][y+3])
            {
                return myBoard[x][y];
            }
        }
    }

    //diagonaal
    for(int x = 0; x != 7 - 3; x++)
    {
        for(int y = 0; y != 6 - 3; y++)
        {
            if(myBoard[x][y] != " " && myBoard[x][y] == myBoard[x+1][y+1] && myBoard[x+1][y+1] == myBoard[x+2][y+2] && myBoard[x+2][y+2] == myBoard[x+3][y+3])
            {
                return myBoard[x][y];
            }
            if(myBoard[x][y+3] != " " && myBoard[x][y+3] == myBoard[x+1][y+2] && myBoard[x+1][y+2] == myBoard[x+2][y+1] && myBoard[x+2][y+1] == myBoard[x+3][y])
            {
                return myBoard[x][y+3];
            }
        }
    }

    return " ";
}

void MainWindow::on_A0_clicked()
{
    for(int y = 5; y != -1; y--)
    {
        if(board[0][y] == " ")
        {
            board[0][y] = nextPlayer;
            drawBoard(board);
            y = 0;
        }
    }
}

void MainWindow::on_B0_clicked()
{
    for(int y = 5; y != -1; y--)
    {
        if(board[1][y] == " ")
        {
            board[1][y] = nextPlayer;
            drawBoard(board);
            y = 0;
        }
    }
}

void MainWindow::on_C0_clicked()
{
    for(int y = 5; y != -1; y--)
    {
        if(board[2][y] == " ")
        {
            board[2][y] = nextPlayer;
            drawBoard(board);
            y = 0;
        }
    }
}

void MainWindow::on_D0_clicked()
{
    for(int y = 5; y != -1; y--)
    {
        if(board[3][y] == " ")
        {
            board[3][y] = nextPlayer;
            drawBoard(board);
            y = 0;
        }
    }
}

void MainWindow::on_E0_clicked()
{
    for(int y = 5; y != -1; y--)
    {
        if(board[4][y] == " ")
        {
            board[4][y] = nextPlayer;
            drawBoard(board);
            y = 0;
        }
    }
}

void MainWindow::on_F0_clicked()
{
    for(int y = 5; y != -1; y--)
    {
        if(board[5][y] == " ")
        {
            board[5][y] = nextPlayer;
            drawBoard(board);
            y = 0;
        }
    }
}

void MainWindow::on_G0_clicked()
{
    for(int y = 5; y != -1; y--)
    {
        if(board[6][y] == " ")
        {
            board[6][y] = nextPlayer;
            drawBoard(board);
            y = 0;
        }
    }
}

void MainWindow::drawBoard(QString myBoard[7][6])
{
    if(nextPlayer == "⦿")
    {
        nextPlayer = "●"; // "⦿"; //●
    }
    else
    {
        nextPlayer = "⦿";
    }

    ui->A1->setText(myBoard[0][0]);
    ui->A2->setText(myBoard[0][1]);
    ui->A3->setText(myBoard[0][2]);
    ui->A4->setText(myBoard[0][3]);
    ui->A5->setText(myBoard[0][4]);
    ui->A6->setText(myBoard[0][5]);

    ui->B1->setText(myBoard[1][0]);
    ui->B2->setText(myBoard[1][1]);
    ui->B3->setText(myBoard[1][2]);
    ui->B4->setText(myBoard[1][3]);
    ui->B5->setText(myBoard[1][4]);
    ui->B6->setText(myBoard[1][5]);

    ui->C1->setText(myBoard[2][0]);
    ui->C2->setText(myBoard[2][1]);
    ui->C3->setText(myBoard[2][2]);
    ui->C4->setText(myBoard[2][3]);
    ui->C5->setText(myBoard[2][4]);
    ui->C6->setText(myBoard[2][5]);

    ui->D1->setText(myBoard[3][0]);
    ui->D2->setText(myBoard[3][1]);
    ui->D3->setText(myBoard[3][2]);
    ui->D4->setText(myBoard[3][3]);
    ui->D5->setText(myBoard[3][4]);
    ui->D6->setText(myBoard[3][5]);

    ui->E1->setText(myBoard[4][0]);
    ui->E2->setText(myBoard[4][1]);
    ui->E3->setText(myBoard[4][2]);
    ui->E4->setText(myBoard[4][3]);
    ui->E5->setText(myBoard[4][4]);
    ui->E6->setText(myBoard[4][5]);

    ui->F1->setText(myBoard[5][0]);
    ui->F2->setText(myBoard[5][1]);
    ui->F3->setText(myBoard[5][2]);
    ui->F4->setText(myBoard[5][3]);
    ui->F5->setText(myBoard[5][4]);
    ui->F6->setText(myBoard[5][5]);

    ui->G1->setText(myBoard[6][0]);
    ui->G2->setText(myBoard[6][1]);
    ui->G3->setText(myBoard[6][2]);
    ui->G4->setText(myBoard[6][3]);
    ui->G5->setText(myBoard[6][4]);
    ui->G6->setText(myBoard[6][5]);

    ui->currentPlayer->setText(nextPlayer);

    QString winner = checkWinner(board);
    if(winner != " ")
    {
        disable();
        ui->label_15->setText(winner + " is the winner!");
        ui->currentPlayer->setText(winner);
    }


}

void MainWindow::disable()
{
    ui->A0->setEnabled(false);
    ui->B0->setEnabled(false);
    ui->C0->setEnabled(false);
    ui->D0->setEnabled(false);
    ui->E0->setEnabled(false);
    ui->F0->setEnabled(false);
    ui->G0->setEnabled(false);
}

void MainWindow::enable()
{
    ui->A0->setEnabled(true);
    ui->B0->setEnabled(true);
    ui->C0->setEnabled(true);
    ui->D0->setEnabled(true);
    ui->E0->setEnabled(true);
    ui->F0->setEnabled(true);
    ui->G0->setEnabled(true);
}

void MainWindow::on_Reset_clicked()
{
    nextPlayer = "⦿";

    for(int x = 0; x != 7; x++)
    {
        for(int y = 0; y != 6; y++)
        {
            board[x][y] = " ";
        }
    }

    ui->label_15->setText("Current player");
    enable();
    drawBoard(board);
}
