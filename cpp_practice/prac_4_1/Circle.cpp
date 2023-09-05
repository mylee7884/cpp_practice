#include <iostream>
using namespace std;

#include "Circle.h"

Circle::Circle(double _radius)
{
	radius = _radius;
}

double Circle::GetArea()
{
	return 3.14 * radius * radius;
}

double Circle::GetGirth()
{
	return 2 * 3.14 * radius;
}