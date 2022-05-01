#include "Hyperbola.h"
#include <cmath>

Hyperbola::Hyperbola(void)
{
}

Hyperbola::Hyperbola(int a , int b , double x)
    :Curves(a,b,x)
{
   
}

double Hyperbola::y()
{
    return sqrt((1 + (GetX() * GetX()) / (GetA() * GetA())) * GetB() * GetB());
}
