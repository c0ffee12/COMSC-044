#include <iostream>
#include <string> //IMPORTANT - use to cout string objects

using namespace std;

void arrBubbleSort(string*[], int);

int main() {

	cout << "Homework IXB\nArray Sorter\nBy Dominic Lopez\n\n";

	// Define an array with unsorted values
	const int SIZE = 15;

	string donations[SIZE] = { "The", "Woods", "Are", "Lovely", "Dark", "And", "Deep", "But", "I", "Have", "Promises", "To", "Keep", "Robert", "Frost" };

	string* arrPtr[SIZE] = { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, };

	//assign each pointer in the pointer array to donations
	for (int i = 0; i < SIZE; i++) {
		arrPtr[i] = &donations[i];
	}

	cout << "\n";

	arrBubbleSort(arrPtr, SIZE);

	cout << "The words, sorted in ascending order are:\n";

	for (int i = 0; i < SIZE; i++) {
		cout << *(arrPtr[i]) << " ";
	}

	cout << "\n\nThe words, in their original order are:\n";

	for (int i = 0; i < SIZE; i++) {
		cout << donations[i] << " ";
	}

	cin.ignore();
	cin.get();

	return 0;


}
void arrBubbleSort(string* old[], int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {

			if (*(old[j]) > *(old[j + 1])) {

				//swap
				string* a = old[j + 1];
				old[j + 1] = old[j];
				old[j] = a;
			}
		}
	}
}