#include <iostream>
#include <fstream>

using namespace std;

int* arrayExpander(int*, int);

int main() {

	cout << "Array Expander\nBy Dominic Lopez";

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
	doubledArray = arrayExpander(gradeList, size);


	cout << "\n\nNew Array: ";
	for (int i = 0; i < size*2; i++) {
		cout << doubledArray[i] << " ";
	}

	cout << "\nSize of the new array: " << size*2;

	cin.ignore();
	cin.get();

	return 0;
}

int* arrayExpander(int *oldArray, int size) {

	int *newArray = new int[size * 2];

	for (int i = 0; i < size*2; i++) {
		*(newArray + i) = 0;
	}

	for (int i = 0; i < size; i++) {
		*(newArray + i) = *(oldArray + i);
	}

	return newArray;

}