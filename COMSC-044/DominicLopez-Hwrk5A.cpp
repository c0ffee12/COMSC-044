/*

	Average Rate Calculator
	Dominic Lopez

	Avg Rate: 5.2625%

*/

#include <iostream>
#include <iomanip>
using namespace std;


int main() {

	bool cont = true;
	const double OLD_RATE = 9.92, DES_RATE = 20.34;

	cout << fixed << setprecision(3);

	while (cont) {

		double avgRateGuess, oldYearCPK = OLD_RATE, newYearCPK = OLD_RATE;

		cout << "Enter rate of Increase Guess (in %): ";
		cin >> avgRateGuess;

		for (int i = 0; i < 14; i++) {

			oldYearCPK = newYearCPK;
			newYearCPK = (1 + avgRateGuess*0.01)*oldYearCPK;
			
		}

		cout << "The current rate would be: " << newYearCPK << " cents/KWHr";
		cout << "\nThe desired rate would be: " << DES_RATE << " cents/KWHr";

		cout << "\nContinue? (y/n): ";
		char c;
		cin >> c;

		if (c == 'N' || c == 'n')
			cont = false;

		cout << "\n";
			


	}


	return 0;
}