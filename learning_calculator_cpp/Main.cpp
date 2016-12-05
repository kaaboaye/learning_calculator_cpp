#include <iostream>

#include "Calculator.h"

using namespace std;

int main()
{
	Calculator calc;
	
	calc.getUserInput();

	cout << "Suma: " << calc.sum() << endl;
	cout << "Iloczyn: " << calc.product() << endl;

	cout << endl << "Naciœnij [Enter] aby zakonczyc.";
	string null;
	getline(cin, null);

	return 0;
}