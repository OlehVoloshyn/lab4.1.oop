#pragma once
class Curves
{

	int a, b;
	double x;
public:
	Curves(void);
	Curves(int a, int b, double x);
	

	int GetA() { return a; }
	int GetB() { return b; }
	double GetX() { return x; }
	~Curves() {};
	virtual double y() = 0;
};

