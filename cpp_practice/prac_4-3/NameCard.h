#pragma once
class NameCard
{
private: 
	char* name;
	char* phone;
	char* addr;
	char* jobTitle;

public:
	NameCard(const char*, const char*, const char*, const char*);
	void ShowData();

	~NameCard();
};

