#include <iostream>
#include <vector>

using namespace std;

void arrBubbleSort(int* [], int);

int main() {

	cout << "Homework IXA\nArray Sorter\nBy Dominic Lopez\n\n";

	// Define an array with unsorted values
	const int SIZE = 15;

	int donations[SIZE] = { 5, 100, 5, 25, 10, 5, 25, 5, 5, 100, 10, 15, 10, 5, 10 };

	int* arrPtr[SIZE] = { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, };

	//assign each pointer in the pointer array to donations
	for (int i = 0; i < SIZE; i++) {
		arrPtr[i] = &donations[i];
	}

	cout << "\n";

	arrBubbleSort(arrPtr, SIZE);

	cout << "The donations, sorted in ascending order are:\n";

	for (int i = 0; i < SIZE; i++) {
		cout << *(arrPtr[i]) << " ";
	}

	cout << "\n\nThe donations, in their original order are:\n";

	for (int i = 0; i < SIZE; i++) {
		cout << donations[i] << " ";
	}

	cin.ignore();
	cin.get();

	return 0;


}
void arrBubbleSort(int* old[], int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {

			if (*(old[j]) > *(old[j + 1])) {

				//swap
				int* a = old[j + 1];
				old[j + 1] = old[j];
				old[j] = a;
			}
		}
	}
}