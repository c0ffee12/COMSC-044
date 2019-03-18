//Dominic Lopez
//Math Tutor
//Homework 03B

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{

	srand(time(0));
	double num1, num2;

	num1 = 1 + rand() % 1000;
	num2 = 1 + rand() % 1000;

	cout << setw(5) << num1 << endl;
	cout << "+" << setw(4) << num2 << endl;
	cout << "_____";
	cin.get();
	cout << setw(5) << num1 + num2;

}