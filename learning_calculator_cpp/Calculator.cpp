#include "Calculator.h"


Calculator::Calculator()
{
	data.clear();
}

string Calculator::start()
{
	return "Podaj liczby do zsumowania. Dwukrotny [Enter] zatwierdzi.";
}

double Calculator::sum()
{
	double output = 0;

	for (int i = 0; i < data.size(); i++)
	{
		output += data[i];
	}

	return output;
}

Calculator::~Calculator()
{
}
