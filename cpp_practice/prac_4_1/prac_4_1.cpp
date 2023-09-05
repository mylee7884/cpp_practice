#include <iostream>

#include "Rectangle.h"
#include "Circle.h"

using namespace std;


int main()
{
    Rectangle rec(3, 4);
    cout << "R Area: " << rec.GetArea() << endl;
    cout << "R Perimeter: " << rec.GetGirth() << endl;

    Circle cir(5);
    cout << "C Area: " << cir.GetArea() << endl;
    cout << "C Circumference: " << cir.GetGirth() << endl;

    return 0;
}

