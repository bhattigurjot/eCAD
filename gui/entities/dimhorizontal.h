#ifndef DIMHORIZONTAL_H
#define DIMHORIZONTAL_H

#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QFont>

#include "getEntity.h"
#include "qmath.h"
#include "arrow.h"

class DimHorizontal: public getEntity
{
    Q_OBJECT

public:
    DimHorizontal(QObject *parent = 0) : getEntity(parent) {}
    DimHorizontal(int i, QPointF, QPointF, QPointF);
    DimHorizontal(QPointF, QPointF, QPointF);
    QPainterPath shape() const;
    QRectF boundingRect() const;
    virtual void paint(QPainter *painter,
                       const QStyleOptionGraphicsItem *option,
                       QWidget *widget);
    enum { Type = UserType + 8 };
    int type() const;
    void eval();

    int id;
    Arrow *arrow;
    QPointF startP, midP, endP;
    QGraphicsLineItem extLine1, extLine2;
};

#endif // DIMHORIZONTAL_H
