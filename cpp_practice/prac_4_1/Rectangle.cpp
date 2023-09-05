#include <iostream>
using namespace std;

#include "Rectangle.h"
Rectangle::Rectangle(double _width, double _height)
{
	width = _width;
	height = _height;
}

double Rectangle::GetArea()
{
	return width * height;
}

double Rectangle::GetGirth()
{
	return 2 * (width + height);
}