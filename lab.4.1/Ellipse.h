#pragma once
#include "Curves.h"
class Ellipse :
    public Curves
{

public:
    
    Ellipse(void);
    Ellipse(int a, int b, double x);
    ~Ellipse() {}
    virtual double y();
  
};

