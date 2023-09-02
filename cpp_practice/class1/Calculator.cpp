#include <iostream>
#include "Calculator.h"

using namespace std;

void Calculator::Init() {
	nCntAdd = 0;
	nCntMin = 0;
	nCntMul = 0;
	nCntDiv = 0;
}

double Calculator::Add(double a, double b) {
	nCntAdd++;
	return a + b;
}

double Calculator::Min(double a, double b) {
	nCntMin++;
	return a - b;
}

double Calculator::Mul(double a, double b) {
	nCntMul++;
	return a * b;
}

double Calculator::Div(double a, double b) {
	nCntDiv++;
	return a / b;
}

void Calculator::ShowOpCount() {
	cout << "Addition: " << nCntAdd 
		 << " Substraction: " << nCntMin 
		 << " multiplication: " << nCntMul
		 << " Division: " << nCntDiv << endl;
}