#include <iostream>

using namespace std;

// 1. call by reference (C style)
void swap_1(int* a, int* b);

// 2. call by reference (C++ style)
void swap_2(int& a, int& b);

// 3. use template
template <typename T>
void swap_3(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int nNum1 = 100, nNum2 = 200;

    // test to call by reference (C style)
    cout << "before call swap_1: num1=" << nNum1 << " num2=" << nNum2 << endl;
    swap_1(&nNum1, &nNum2);
    cout << "after call swap_1: num1=" << nNum1 << " num2=" << nNum2 << endl;

    // test to call by reference (C++ style)
    cout << "before call swap_2: num1=" << nNum1 << " num2=" << nNum2 << endl;
    swap_2(nNum1, nNum2);
    cout << "after call swap_2: num1=" << nNum1 << " num2=" << nNum2 << endl;

    // test to use template
    cout << "before call swap_3: num1=" << nNum1 << " num2=" << nNum2 << endl;
    swap_3(nNum1, nNum2);
    cout << "after call swap_3: num1=" << nNum1 << " num2=" << nNum2 << endl;

    char cChar1 = 'a', cChar2 = 'z';
    cout << "before call swap_3: char1=" << cChar1 << " char2=" << cChar2 << endl;
    swap_3(cChar1, cChar2);
    cout << "after call swap_3: char1=" << cChar1 << " char2=" << cChar2 << endl;

    return 0;
}

void swap_1(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


void swap_2(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}