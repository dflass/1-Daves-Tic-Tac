#include "board.h"
#include <QDebug>

board::board(QWidget *parent) : QWidget(parent)
{
    setMinimumSize(150, 150);
    setMaximumSize(150,150);
    xos.resize(9);
    cellW = this->size().width()/3;
    cellH = this->size().height()/3;
    boardWin = 0;
    a = false;
}

bool board::isOpen(int index){
    return (xos[index]==0);
}

void board::set(int index,int x){
    xos[index]=x;
    int r = index/3;
    int c = index%3;
    if(boardWin==0){
        if(xos[r*3]==x && xos[r*3+1]==x && xos[r*3+2]==x){boardWin = x;}
        if(xos[c]==x && xos[c+3]==x && xos[c+6]==x){boardWin = x;}
        if(xos[0]==x && xos[4]==x && xos[8]==x){boardWin = x;}
        if(xos[2]==x && xos[4]==x && xos[6]==x){boardWin = x;}

    }
}

void board::active(){
    a = true;
}

void board::disactive(){
    a = false;
}

bool board::isFull(){
    return(xos[0]!=0&&xos[1]!=0&&xos[2]!=0&&xos[3]!=0&&xos[4]!=0&&xos[5]!=0&&xos[6]!=0&&xos[7]!=0&&xos[8]!=0);
}

int board::w(){
    return boardWin;
}

void board::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    pen.setWidthF(cellW/10.0);
    painter.setPen(pen);
    painter.drawLine(cellW,0,cellW,cellH*3);
    painter.drawLine(cellW*2,0,cellW*2,cellH*3);
    painter.drawLine(0,cellH,cellW*3,cellH);
    painter.drawLine(0,cellH*2,cellW*3,cellH*2);


    for(int i=0;i<9;i++){
        draw(&painter, i);
    }

    if(boardWin == 1){
        painter.setPen(Qt::red);
        painter.drawLine(0,0,3*cellH, 3*cellW);
        painter.drawLine(3*cellH,0,0, 3*cellW);
        painter.setPen(Qt::black);
    }
    if(boardWin ==2){
        painter.setPen(Qt::red);
        painter.drawEllipse(QPoint(cellH*3/2,cellW*3/2), cellH*3/2,cellW*3/2);
        painter.setPen(Qt::black);
    }
    if(a){
        painter.setPen(Qt::blue);
        QRect rect = QRect(QPoint(0,0),QPoint(3*cellW-1, 3*cellH-1));
        painter.drawRect(rect);
        painter.setPen(Qt::black);
    }
}

void board::draw(QPainter *painter, int i)
{
    int row = i%3;
    int column = i/3;
    row = row * cellH;
    column = column * cellW;

    if(xos[i] == 1){
        painter->drawLine(row,column,row+cellH, column+cellW);
        painter->drawLine(row,column+cellW,row+cellH, column);
    }
    if(xos[i]==2){
        painter->drawEllipse(QPoint(row+cellH/2,column+cellW/2), cellH/2,cellW/2);
    }

    update();
}

