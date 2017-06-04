#include "mainboard.h"
#include "ui_mainboard.h"

#include <QDebug>

mainBoard::mainBoard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainBoard)
{
    ui->setupUi(this);

    QSize size = mainBoard::size();
    int x_size = size.height();
    int y_size = size.height();

    cur = 1;
    next = 10;
    win = 0;

    board1 = new board(this);
    board2 = new board(this);
    board3 = new board(this);
    board4 = new board(this);
    board5 = new board(this);
    board6 = new board(this);
    board7 = new board(this);
    board8 = new board(this);
    board9 = new board(this);

    ui->gridLayout->setSpacing(10);
    ui->gridLayout->addWidget(board1,1,1);
    ui->gridLayout->addWidget(board2,1,2);
    ui->gridLayout->addWidget(board3,1,3);
    ui->gridLayout->addWidget(board4,2,1);
    ui->gridLayout->addWidget(board5,2,2);
    ui->gridLayout->addWidget(board6,2,3);
    ui->gridLayout->addWidget(board7,3,1);
    ui->gridLayout->addWidget(board8,3,2);
    ui->gridLayout->addWidget(board9,3,3);

}

void mainBoard::mousePressEvent(QMouseEvent* e)
{
    QRect b1 = board1->frameGeometry();
    QRect b2 = board2->frameGeometry();
    QRect b3 = board3->frameGeometry();
    QRect b4 = board4->frameGeometry();
    QRect b5 = board5->frameGeometry();
    QRect b6 = board6->frameGeometry();
    QRect b7 = board7->frameGeometry();
    QRect b8 = board8->frameGeometry();
    QRect b9 = board9->frameGeometry();

    if(b1.contains(e->pos())&&(next==0||next==10)){
        if (board1->isOpen(((e->pos()-board1->pos()).x()/(board1->cellW)+(e->pos()-board1->pos()).y()/(board1->cellH)*3)))
        {   board1->set((e->pos()-board1->pos()).x()/(board1->cellW)+(e->pos()-board1->pos()).y()/(board1->cellH)*3,cur);
            cur = cur%2 + 1;
            next = (e->pos()-board1->pos()).x()/(board1->cellW)+(e->pos()-board1->pos()).y()/(board1->cellH)*3;
            next = checkNext(next);
            board1->disactive();
            nextBoard(next)->active();
        }
    }
    if(b2.contains(e->pos())&&(next==1||next==10)){
        if (board2->isOpen(((e->pos()-board2->pos()).x()/(board1->cellW)+(e->pos()-board2->pos()).y()/(board1->cellH)*3)))
        {   board2->set((e->pos()-board2->pos()).x()/(board1->cellW)+(e->pos()-board2->pos()).y()/(board1->cellH)*3,cur);
            cur = cur%2 + 1;
            next = (e->pos()-board2->pos()).x()/(board2->cellW)+(e->pos()-board2->pos()).y()/(board2->cellH)*3;
            next = checkNext(next);
            board2->disactive();
            nextBoard(next)->active();
        }
    }
    if(b3.contains(e->pos())&&(next==2||next==10)){
        if (board3->isOpen(((e->pos()-board3->pos()).x()/(board1->cellW)+(e->pos()-board3->pos()).y()/(board1->cellH)*3)))
        {   board3->set((e->pos()-board3->pos()).x()/(board1->cellW)+(e->pos()-board3->pos()).y()/(board1->cellH)*3,cur);
            cur = cur%2 + 1;
            next = (e->pos()-board3->pos()).x()/(board3->cellW)+(e->pos()-board3->pos()).y()/(board3->cellH)*3;
            next = checkNext(next);
            board3->disactive();
            nextBoard(next)->active();
        }
    }
    if(b4.contains(e->pos())&&(next==3||next==10)){
        if (board4->isOpen(((e->pos()-board4->pos()).x()/(board1->cellW)+(e->pos()-board4->pos()).y()/(board1->cellH)*3)))
        {   board4->set((e->pos()-board4->pos()).x()/(board1->cellW)+(e->pos()-board4->pos()).y()/(board1->cellH)*3,cur);
            cur = cur%2 + 1;
            next = (e->pos()-board4->pos()).x()/(board4->cellW)+(e->pos()-board4->pos()).y()/(board4->cellH)*3;
            next = checkNext(next);
            board4->disactive();
            nextBoard(next)->active();
        }
    }
    if(b5.contains(e->pos())&&(next==4||next==10)){
        if (board5->isOpen(((e->pos()-board5->pos()).x()/(board1->cellW)+(e->pos()-board5->pos()).y()/(board1->cellH)*3)))
        {   board5->set((e->pos()-board5->pos()).x()/(board1->cellW)+(e->pos()-board5->pos()).y()/(board1->cellH)*3,cur);
            cur = cur%2 + 1;
            next = (e->pos()-board5->pos()).x()/(board5->cellW)+(e->pos()-board5->pos()).y()/(board5->cellH)*3;
            next = checkNext(next);
            board5->disactive();
            nextBoard(next)->active();
        }
    }
    if(b6.contains(e->pos())&&(next==5||next==10)){
        if (board6->isOpen(((e->pos()-board6->pos()).x()/(board1->cellW)+(e->pos()-board6->pos()).y()/(board1->cellH)*3)))
        {   board6->set((e->pos()-board6->pos()).x()/(board1->cellW)+(e->pos()-board6->pos()).y()/(board6->cellH)*3,cur);
            cur = cur%2 + 1;
            next = (e->pos()-board6->pos()).x()/(board6->cellW)+(e->pos()-board6->pos()).y()/(board6->cellH)*3;
            next = checkNext(next);
            board6->disactive();
            nextBoard(next)->active();
        }
    }
    if(b7.contains(e->pos())&&(next==6||next==10)){
        if (board7->isOpen(((e->pos()-board7->pos()).x()/(board1->cellW)+(e->pos()-board7->pos()).y()/(board1->cellH)*3)))
        {   board7->set((e->pos()-board7->pos()).x()/(board1->cellW)+(e->pos()-board7->pos()).y()/(board1->cellH)*3,cur);
            cur = cur%2 + 1;
            next = (e->pos()-board7->pos()).x()/(board7->cellW)+(e->pos()-board7->pos()).y()/(board7->cellH)*3;
            next = checkNext(next);
            board7->disactive();
            nextBoard(next)->active();
        }
    }
    if(b8.contains(e->pos())&&(next==7||next==10)){
        if (board8->isOpen(((e->pos()-board8->pos()).x()/(board1->cellW)+(e->pos()-board8->pos()).y()/(board1->cellH)*3)))
        {   board8->set((e->pos()-board8->pos()).x()/(board1->cellW)+(e->pos()-board8->pos()).y()/(board1->cellH)*3,cur);
            cur = cur%2 + 1;
            next = (e->pos()-board8->pos()).x()/(board8->cellW)+(e->pos()-board8->pos()).y()/(board8->cellH)*3;
            next = checkNext(next);
            board8->disactive();
            nextBoard(next)->active();
        }
    }
    if(b9.contains(e->pos())&&(next==8||next==10)){
        if (board9->isOpen(((e->pos()-board9->pos()).x()/(board1->cellW)+(e->pos()-board9->pos()).y()/(board1->cellH)*3)))
        {   board9->set((e->pos()-board9->pos()).x()/(board1->cellW)+(e->pos()-board9->pos()).y()/(board1->cellH)*3,cur);
            cur = cur%2 + 1;
            next = (e->pos()-board9->pos()).x()/(board9->cellW)+(e->pos()-board9->pos()).y()/(board9->cellH)*3;
            next = checkNext(next);
            board9->disactive();
            nextBoard(next)->active();
        }
    }

    isWin();
}

void mainBoard::isWin(){
    int a = board1->w();
    int b = board2->w();
    int c = board3->w();
    int d = board4->w();
    int e = board5->w();
    int f = board6->w();
    int g = board7->w();
    int h = board8->w();
    int i = board9->w();
    if(a==b&&a==c&&a!=0 || a==d&&a==g&&a!=0){win=a;}
    if(i==h&&i==g&&i!=0 || i==f&&i==c&&i!=0){win=i;}
    if(e==a&&e==i&&e!=0 || e==c&&e==g&&e!=0 || e==d&&e==f&&e!=0 || e==b&&e==h&&e!=0){win=e;}
    update();
}

board* mainBoard::nextBoard(int n){
    switch(n){
    case 0: return board1;
    case 1: return board2;
    case 2: return board3;
    case 3: return board4;
    case 4: return board5;
    case 5: return board6;
    case 6: return board7;
    case 7: return board8;
    case 8: return board9;
    default: return board9;}
}

int mainBoard::checkNext(int n){
    board* temp = nextBoard(n);
    if(temp->isFull()){return 10;}
    else return n;
}

mainBoard::~mainBoard()
{
    delete ui;
}

void mainBoard::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QFont font = painter.font() ;
    font.setPointSize(font.SizeResolved * 20);
    painter.setPen(Qt::green);
    painter.setFont(font);
    QRect rect = QRect(QPoint(0,0),QPoint(this->size().width(),this->size().height()));

    if(win==1){painter.drawText(rect,"Congrats to the winner X");}
    if(win==2){painter.drawText(rect,"Congrats to the winner O");}
    //painter.drawLine(0, 0, 200, 200);
}
