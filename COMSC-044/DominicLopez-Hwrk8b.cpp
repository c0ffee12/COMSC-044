//Homework 8b
//Dominic lopez

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

double findMedian(vector<int>);

int main() {

	cout << "Homework 08b\nMedian Finder\nBy Dominic Lopez";
	int selection = 0;

	do {
		cout << "\nEnter a number\n1: GradeListE.txt\n2: GradeListO.txt\n";
		cin >> selection;

	} while (!(selection == 1 || selection == 2));

	ifstream gradeReader;
	vector<int> grades;

	if (selection == 1)
		gradeReader.open("GradeListE.txt");
	else
		gradeReader.open("GradeListO.txt");

	int i;
	while (gradeReader >> i) {
		grades.push_back(i);
	}

	double med = findMedian(grades);
	cout << "\n\nMedian Score: " << med;

	cin.ignore();
	cin.get();

	return 0;
}

double findMedian(vector<int> values) {

	for (int j = 0; j < values.size(); j++) {

		int up = values.at(j);
		int index = j;

		for (int i = j; i < values.size(); i++) {

			if (values.at(i) < up) {
				up = values.at(i);
				index = i;
			}

		}

		values[index] = values.at(j);
		values[j] = up;

	}

	if (values.size() % 2 == 0) {
		//even

		return 1.0f * (values[(values.size() / 2)] + values[values.size() / 2 - 1]) / 2;

	} else {
		//odd

		return values[(values.size() / 2)];
	}

}