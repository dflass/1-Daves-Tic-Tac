#ifndef MAINBOARD_H
#define MAINBOARD_H

#include <QMainWindow>
#include <QPainter>
#include <QMouseEvent>

#include "board.h"

namespace Ui {
class mainBoard;
}

class mainBoard : public QMainWindow
{
    Q_OBJECT

public:
    int cur;
    int next;
    board* nextBoard(int n);
    int checkNext(int n);
    void isWin();
    explicit mainBoard(QWidget *parent = 0);

    int win;
    ~mainBoard();

private:
    Ui::mainBoard *ui;
    board *board1;
    board *board2;
    board *board3;
    board *board4;
    board *board5;
    board *board6;
    board *board7;
    board *board8;
    board *board9;
protected:
    void paintEvent(QPaintEvent *e);

private slots:
    void mousePressEvent(QMouseEvent *event);
};

#endif // MAINBOARD_H
