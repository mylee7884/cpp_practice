#include <iostream>

#include "Calculator.h"

using namespace std;

int main()
{
    Calculator cal;
    cal.Init();

    cout << " 3+5=" << cal.Add(3, 5) << endl;
    cout << " 3/5=" << cal.Div(3, 5) << endl;
    cout << " 12-4=" << cal.Min(12, 4) << endl;
    cout << " 12/4=" << cal.Div(12, 4) << endl;

    cal.ShowOpCount();
    return 0;
}

