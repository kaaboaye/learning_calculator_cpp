#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Calculator
{
public:
	vector < double > data;

	Calculator();

	void getUserInput();
	double sum();
	double product();
private:
};

