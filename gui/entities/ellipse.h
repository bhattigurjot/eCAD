#ifndef ELLIPSE_H
#define ELLIPSE_H

#include <QPainter>
#include <QGraphicsItem>

#include "qmath.h"

class Ellipse : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    Ellipse(int, QPointF, QPointF, QPointF);
    Ellipse(int, QPointF, qreal, qreal);
    QRectF boundingRect() const;
    virtual void paint(QPainter *painter,
                       const QStyleOptionGraphicsItem *option,
                       QWidget *widget);
    enum { Type = UserType + 4 };
    int type() const;
    int id;

    QPointF p1, p2, p3;
    float d12, d13, majRadius, minRadius;
    float theta;

private:
    QVector<QPointF> stuff;
};

#endif // ELLIPSE_H
