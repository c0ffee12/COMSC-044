#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {

	cout << "Dominic Lopez\nScore Calculator\nHWRK 07A\n\n";

	vector<char> student;
	vector<char> answers;

	double missed = 0;

	ifstream pageReader;

	pageReader.open("StudentAnswers.txt");

	char c;
	while (pageReader >> c) {
		student.push_back(c);
	}

	pageReader.close();

	pageReader.open("CorrectAnswers.txt");

	while (pageReader >> c) {
		answers.push_back(c);
	}

	pageReader.close();

	if (student.size() == answers.size()) {
		for (int i = 0; i < student.size(); i++) {
			if (student.at(i) != answers.at(i)) {
				cout << i + 1 << " incorrect; Correct answer: " << answers.at(i) << " Your Answer: " << student.at(i) << "\n";
				missed++;
			}
		}

		cout << "\nMissed Answers: " << missed << "\nCorrect Percentage: " << 100 * ((20 - missed) / 20) << "%";
	}
	else {
		cout << "Err: Student and Correct files have different number of answers!";
	}

	cin.ignore();
	cin.get();

	return 0;

}