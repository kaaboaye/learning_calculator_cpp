#include "Calculator.h"

Calculator::Calculator()
{
	data.clear();
}

void Calculator::getUserInput()
{
	string input;

	cout << "Podaj liczby do zsumowania. Pusta linia zatwierdzi." << endl;

	while (true)
	{
		getline(cin, input);

		try
		{
			if (input != "")
			{
				data.push_back(stod(input));
			}
			else
			{
				break;
			}
		}
		catch (...)
		{
			cout << "Podano nieprawidlowa liczbe." << endl;
		}
	}
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


double Calculator::product()
{
	double output = 1;

	for (int i = 0; i < data.size(); i++)
	{
		output *= data[i];
	}

	return output;
}
