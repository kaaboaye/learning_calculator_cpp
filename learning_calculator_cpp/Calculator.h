#pragma once

#include <string>
#include <vector>

using namespace std;

class Calculator
{
public:

	vector < double > data;

	Calculator();

	string start();
	double sum();

	~Calculator();
private:
};

