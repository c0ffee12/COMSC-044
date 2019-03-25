#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {

	ofstream numFile("LopezD-Random.txt");

	if (numFile.is_open()) {
		for (int i = 0; i < 1000; i++) {
			numFile << rand() % 999 + 1 << "\n";
		}

		numFile.close();

		cout << "Random File created by Dominic Lopez!";
	}
	else {
		cout << "Could not create file!";
	}

	cin.ignore();
	cin.get();

	

	return 0;

}
