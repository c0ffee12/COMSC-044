//Array Sorter
//By Dominic Lopez

// Program 8-8:
#include <iostream>
#include <string>
using namespace std;

string* sortArray(string*, int);
void showArray(string*, int);

int main()
{

	cout << "Homework 8A\nArray Sorter\nBy Dominic Lopez\n\n";

	// Define an array with unsorted values
	const int SIZE = 20;
	string names[SIZE] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
	"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
	"Taylor, Terri", "Johnson, Jill",
	"Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
	"James, Jean", "Weaver, Jim", "Pore, Bob",
	"Rutherford, Greg", "Javens, Renee",
	"Harrison, Rose", "Setzer, Cathy",
	"Pike, Gordon", "Holland, Beth" };
	

	string* newNames = nullptr;
	newNames = sortArray(names, SIZE);

	showArray(newNames, SIZE);

	cin.ignore();
	cin.get();

	return 0;
}

string* sortArray(string* names, int SIZE) {

	for (int j = 0; j < SIZE; j++) {

		string up = names[j];
		int index = j;

		for (int i = j; i < SIZE; i++) {

			if (names[i] < up) {
				up = names[i];
				index = i;
			}

		}

		names[index] = names[j];
		names[j] = up;

	}

	return names;

}

void showArray(string* names, int SIZE) {

	for (int i = 0; i < SIZE; i++) {
		cout << names[i] << "\n";
	}

}