#include <iostream>

#include "Calculator.h"

using namespace std;

int main()
{
	Calculator calc;

	string input;

	cout << calc.start() << endl;

	while (true)
	{
		getline(cin, input);

		try
		{
			if (input != "")
			{
				calc.data.push_back(stod(input));
			}
			else
			{
				break;
			}
		}
		catch (const std::exception& e)
		{
			cout << "Podano nieprawidlowa liczbe." << endl;
		}

	}

	cout << calc.sum();
	getline(cin, input);
	return 0;
}