//Dominic Lopez
//Loan Calculator
//Hwrk-03A

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double rate, timesCompounded, principal, interest, amount;

	cout << "Dominic Lopez's Loan\n";

	cout << "Please enter the following:\n";


	
	cout << left << setw(22)  << "Interest Rate (in %):"  << setw(3) << right << "  ";
	cin >> rate;


	cout << left << setw(22) << "Times Compounded:" << setw(3) << right << "  ";
	cin >> timesCompounded;

	cout << left << setw(22) << "Principal:" << setw(3) << right << "$ ";
	cin >> principal;

	amount = principal * pow((1 + ((rate * 0.01f) / timesCompounded)), timesCompounded); //rate * 0.01f because rate is in %
	interest = amount - principal;

	cout << setprecision(2) << fixed; //rounds to 2 decimal places

	cout << endl << endl 
	     << left << setw(22) << "Interest Rate (in %):" << setw(3) << "  " << setw(10) << right << rate << endl;
	cout << left << setw(22) << "Times Compounded:" << setw(3) << "  " << setw(10) << right << timesCompounded << endl;
	cout << left << setw(22) << "Principal:" << setw(3) << "$ " << setw(10) << right << principal << endl << endl;
	cout << left << setw(22) << "Interest:" << setw(3) << "$ " << setw(10) <<  right << interest << endl;
	cout << left << setw(22) << "Amount in Savings:" << setw(3) << "$ " << setw(10) << right << amount << endl;




}