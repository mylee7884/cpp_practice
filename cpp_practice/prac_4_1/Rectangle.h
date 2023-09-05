#pragma once
class Rectangle
{
private:
	double width;
	double height;

public:
	Rectangle(double width = 1, double height = 1);
	double GetArea();
	double GetGirth();
};
