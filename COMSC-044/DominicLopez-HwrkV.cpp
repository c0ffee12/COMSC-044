#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	/*
	
		NOTE: PLACE RANDOM.TXT NEXT
		TO WHERE WHERE YOUR .EXE FILE
		SAVES
	
	*/

	int sum = 0, total = 0;
	double minValue = 0, maxValue = 0;

	string line;
	fstream randFile("Random.txt");

	if (randFile.is_open()) {

		while (getline(randFile, line)) {

			if (total == 0) {
				minValue = stod(line);
				maxValue = stod(line);
			}

			total++;
			sum += stod(line);

			if (stod(line) < minValue)
				minValue = stod(line);

			if (stod(line) > maxValue)
				maxValue = stod(line);

		}

		cout << "Dominic Lopez's Statistics Program\n";

		cout << "The number of numbers entered is: " << total << "\n";
		cout << "The largest number is: " << maxValue << "\n";
		cout << "The smallest number is: " << minValue << "\n";

		if(total != 0)
			cout << "The average value is: " << sum / total << "\n";

	}
	else {
		cout << "No File Found!";
	}

	cin.ignore();
	cin.get();

	return 0;

}
