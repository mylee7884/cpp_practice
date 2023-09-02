#pragma once
class Calculator
{
private:
	int nCntAdd;
	int nCntMin;
	int nCntMul;
	int nCntDiv;

public:
	void Init();

	double Add(double a, double b);
	double Min(double a, double b);
	double Mul(double a, double b);
	double Div(double a, double b);

	void ShowOpCount();
};

