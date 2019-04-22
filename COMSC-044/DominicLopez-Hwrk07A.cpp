#include <iostream>
#include <fstream>

using namespace std;

int main() {

	cout << "Dominic Lopez\nScore Calculator\nHWRK 07A\n\n";

	char student[20];
	char answers[20];

	double missed = 0;

	ifstream answersFile;
	ifstream studentFile;

	answersFile.open("CorrectAnswers.txt");
	studentFile.open("StudentAnswers.txt");

	for (int i = 0; i < 20; i++) {
		studentFile >> student[i];
		answersFile >> answers[i];	
	}

	answersFile.close();
	studentFile.close();


	for (int i = 0; i < 20; i++) {
		if (student[i] != answers[i]) {
			cout << i+1 << " Incorrect; Your Answer: " << student[i] << " Correct Answer: " << answers[i] << "\n";
			missed++;
		}
	}

	cout << "Missed Answers: " << missed << "\nScore Percentage: " << ((20 - missed)/20)*100 << "%";

	cin.ignore();
	cin.get();


	return 0;
}