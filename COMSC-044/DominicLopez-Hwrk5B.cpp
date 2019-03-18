/*

	Dominic Lopez
	Homework 5B
	ASCII Table

*/

#include <iostream>
using namespace std;

int main() {


	cout << "Dominic Lopez's ASCII Table\n";
	int i = 0;

	while (i < 255) {
		for (int j = 0; j < 16; j++) {


			if((int)'\n' != i)
				cout << static_cast<char>(i) << " ";

			i++;
		}

		cout << "\n";
	}


	cin.ignore();
	cin.get();
	return 0;

}