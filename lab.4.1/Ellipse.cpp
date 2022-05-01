#include "Ellipse.h"
#include <cmath>
Ellipse::Ellipse(void)
{
}
Ellipse::Ellipse(int a, int b , double x)
    :Curves(a,b,x)
{
}
double Ellipse::y()
{
    return sqrt((1 - (GetX() * GetX()) / (GetA() * GetA())) * GetB() * GetB());
}
