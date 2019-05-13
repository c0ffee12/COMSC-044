/*

	Dominic Lopez
	Word Counter pt. 2
	Hwrk 12C


*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countValues(string);
int wordLength(string);

int main() {

	cout << "Dominic Lopez\nWord Counter 2\nHwrk 12C";

	ifstream file;
	file.open("Gettysburg.txt");

	string passage, line;

	while (getline(file, line)) {
		if (passage == "")
			passage = line;
		else
			passage = passage + '\n' + line;
	}

	cout << passage;

	cout << "\n\nWord Count: " << wordLength(passage) - countValues(passage);

	cin.ignore();
	cin.get();
	return 0;

}

int countValues(string passage) {

	int spaces = 0, returns = 0, dashes = 0;

	for (int i = 0; i < passage.length(); i++) {

		if (passage[i] == ' ')
			spaces++;

		if (passage[i] == '\n')
			returns++;

		if (passage[i] == '-')
			dashes++;

	}

	cout << "\n\nSpaces: " << spaces;
	cout << "\nReturns: " << returns;
	cout << "\nDashes: " << dashes;

	return (returns/2) + (dashes/2);

}

int wordLength(string line) {

	if (!line[0])
		return 0;

	int length = 0;

	for (int i = 0; i < line.length(); i++) {



		if (isspace(line[i]))
			length++;

	}

	return length + 1;

}