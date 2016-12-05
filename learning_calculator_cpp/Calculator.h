#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Calculator
{
public:
	Calculator();

	void getUserInput();
	double sum();
	double product();
private:
	vector < double > data;
};

