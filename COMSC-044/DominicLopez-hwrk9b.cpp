#include <iostream>
#include <fstream>

using namespace std;

int* elementShifter(int*, int);

int main() {

	cout << "Element Shifter\nBy Dominic Lopez";

	ifstream reader;
	reader.open("GradeList.txt");

	int size = 50;

	int gradeList[50];



	int grade;
	int index = 0;
	while (reader >> grade) {
		gradeList[index] = grade;
		index++;
	}

	cout << "\n\nOld Array: ";
	for (int i = 0; i < size; i++) {
		cout << gradeList[i] << " ";
	}

	cout << "\nSize of the old array: " << size;

	int* doubledArray = nullptr;
	doubledArray = elementShifter(gradeList, size);


	cout << "\n\nNew Array: ";
	for (int i = 0; i < size + 1; i++) {
		cout << doubledArray[i] << " ";
	}

	cout << "\nSize of the new array: " << size + 1;

	cin.ignore();
	cin.get();

	return 0;
}

int* elementShifter(int *oldArray, int size) {

	int *newArray = new int[size + 1];

	for (int i = 0; i < size + 1; i++) {
		*(newArray + i) = 0;
	}

	for (int i = 0; i < size; i++) {
		*(newArray + 1 + i) = *(oldArray + i);
	}

	return newArray;

}