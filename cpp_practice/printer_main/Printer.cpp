#include <iostream>
using namespace std;

#include "Printer.h"
void Printer::SetString(const char* str) {
	strcpy_s(string, 30, str);
}

void Printer::ShowString() {
	cout << string << endl;
}