#ifndef BOARD_H
#define BOARD_H

#include <QObject>
#include <QWidget>

#include <QPainter>

class board : public QWidget
{
    Q_OBJECT
public:
    explicit board(QWidget *parent = 0);
    QVector<int> xos;
    bool isOpen(int index);
    void set(int index, int x);
    void draw(QPainter *painter, int i);
    void active();
    void disactive();
    bool isFull();
    int w();

    int cellW;
    int cellH;
    int boardWin;
    bool a;


signals:

public slots:

protected:
    void paintEvent(QPaintEvent *);
};

#endif // BOARD_H
