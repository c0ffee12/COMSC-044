#include <iostream>
#include <iomanip>
using namespace std;

void getJudgeData();
void calcScore();
double findLowest();
double findHighest();

double scoreSum = 0, highest = 0, lowest = 10, finalScore;
int numberOfJudges = 0;

int main() {

	cout << "How many judges?\n";
	do {
		cin >> numberOfJudges;

		if (numberOfJudges <= 2 || numberOfJudges == NULL)
			cout << "numberOfJudges must be greater than 2!\n";

	} while (numberOfJudges <= 2 || numberOfJudges == NULL);
	

	getJudgeData();
	calcScore();

	cout << fixed << setprecision(3) << showpoint;
	cout << "The mean of the " << numberOfJudges - 2 << " middle scores is: " << finalScore << ". \n";
	cout << "The highest score was " << highest << ". \n";
	cout << "The lowest score was " << lowest << ". \n";




	cin.ignore();
	cin.get();
	return 0;
}

void getJudgeData() {

	for (int j = 0; j < numberOfJudges; j++) {

		double i;

		do {

			cout << "\nEnter a score for a judge: ";

			cin >> i;

			if (i < 0 || i > 10)
				cout << "score must be between 0 and 10!";


		} while (i == NULL || i < 0 || i > 10);

		if (i < lowest)
			lowest = i;

		if (i > highest)
			highest = i;

		scoreSum += i;

	}


}

void calcScore() {

	finalScore = (scoreSum - highest - lowest) / (numberOfJudges - 2);

}

double findLowest() {

	return lowest;

}

double findHighest() {

	return highest;

}