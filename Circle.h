#pragma once
#include "Shape.h"

const double PI = 3.1416;

class Circle : public Shape
{
public:
	Circle();
	Circle(int newX, int newY, int newRadius);
	int		getRadius()		const;
	double  getArea()		const;
	double  getPerimeter()	const;
	void	setRadius(int newRadius);
	void	display()		const;
private:
	int		radius;
};

