#include "Line.h"
Line::Line(void)
{
}

Line::Line(int a, int b, double x)
    :Curves(a,b,x)
{
}

double Line::y()
{

    return  GetA() * GetX() + GetB();
}
