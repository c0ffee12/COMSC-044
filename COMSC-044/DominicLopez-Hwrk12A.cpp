/*
	Dominic Lopez
	File Encrypter
	Hwrk 12A
*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	cout << "Dominic Lopez\nFile Encrypter\nHwrk 12A\n";

	fstream file, xFile;
	file.open("Gettysburg.txt");

	xFile.open("Gobblygook.txt");

	if (!file) {
		cout << "Could not open Gettysburg.txt";
	} 
	else if (!xFile) {
		cout << "Could not open Gobblygook.txt";
	}
	else {
		cout << "\nWriting to Gobblygook.txt";
	}

	string line, raw;
	while (getline(file, line, '\n')) {
		if (raw == "")
			raw = line;
		else
			raw = raw + '\n' + line;
	}

	for (int i = 0; i < raw.size(); i++) {
		xFile << (char)((int)raw[i] + 10);
	}

	xFile.close();

	


	cin.ignore();
	cin.get();

	return 0;
}