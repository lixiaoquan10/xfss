#include "cmyiconstyle.h"
<<<<<<< HEAD
#include <QStyleFactory>
#include <QApplication>

CMyIconStyle::CMyIconStyle()
{
    // 设置 Fusion 样式
    QApplication::setStyle(QStyleFactory::create("Fusion"));
=======

CMyIconStyle::CMyIconStyle() :
    QCommonStyle()
{
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
}

int CMyIconStyle::pixelMetric(QStyle::PixelMetric metric, const QStyleOption *option, const QWidget *widget) const
{
    int n;
//    int n = QPlastiqueStyle::pixelMetric(metric, option, widget);
    if(metric == QStyle::PM_SmallIconSize)
        n = 32;
    return n;
}
