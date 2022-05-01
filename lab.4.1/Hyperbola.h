#pragma once
#include "Curves.h"
class Hyperbola :
    public Curves
{
public:
 
    Hyperbola(void);
    Hyperbola(int a , int b, double x);
    ~Hyperbola() {};
    virtual double y();
};

