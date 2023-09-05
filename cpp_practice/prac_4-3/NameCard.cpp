#include <iostream>
#include "NameCard.h"

using namespace std;

NameCard::NameCard(const char* _name, const char* _phone, const char* _addr, const char* _jobTitle)
{
	int nLen;
	nLen = strlen(_name) + 1;
	name = new char[nLen];
	strcpy_s(name, nLen, _name);

	nLen = strlen(_phone) + 1;
	phone = new char[nLen];
	strcpy_s(phone, nLen, _phone);

	nLen = strlen(_addr) + 1;
	addr = new char[nLen];
	strcpy_s(addr, nLen, _addr);

	nLen = strlen(_jobTitle) + 1;
	jobTitle = new char[nLen];
	strcpy_s(jobTitle, nLen, _jobTitle);
}

NameCard::~NameCard()
{
	delete[]name;
	delete[]phone;
	delete[]addr;
	delete[]jobTitle;
}

void NameCard::ShowData()
{
	cout << "Name: " << name << endl;
	cout << "Phone: " << phone << endl;
	cout << "Address: " << addr << endl;
	cout << "Job Title: " << jobTitle << endl;
}

