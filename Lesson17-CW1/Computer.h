#pragma once
#include <iostream>
#include <string>
using namespace std;

class Computer
{
	string name;
	float frequency;
	int ozu;
	bool dvd;
	float cost;
public:
	Computer(string name, float frequency, int ozu, bool dvd, float cost);
	int getOzu()const;
	void show()const;
};

