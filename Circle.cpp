#include "stdafx.h"
#include "Circle.h"
#include <iostream>
#include <iomanip>

using namespace std;

Circle::Circle()
{
	setRadius(1);
}
Circle::Circle(int newX, int newY, int newRadius)
	: Shape(newX, newY)
{
	setRadius(newRadius);
}

int		Circle::getRadius()		const
{
	return radius;
}
double  Circle::getArea()		const
{
	return PI * (radius * radius);
}
double  Circle::getPerimeter()	const
{
	return PI * 2 * radius;
}

void	Circle::setRadius(int newRadius)
{
	radius = newRadius;
}

void	Circle::display()		const
{
	cout << "Circle   : (" << setw(2) << getX() <<  ", "  << setw(2) << getY() << ')'
		<< "    radius: "     << setw(2) << getRadius() << fixed << setprecision(3)
		<< "                  area:  " << setw(8) << getArea()
		<< "    perimeter:  " << setw(8) << getPerimeter() << endl;
}