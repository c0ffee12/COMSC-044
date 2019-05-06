/*
	Password Verifier
	Hwrk 10A
	Dominic Lopez

*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

	cout << "Password Checker\nByDominic Lopez\n\nenter a password: ";

	string password;
	bool minSeven = false, 
		oneUp = false, 
		oneLow = false, 
		oneDigit = false, 
		onePunct = false;

	getline(cin, password);

	if (password.length() >= 7)
		minSeven = true;

	for(char c : password) {

		if (isdigit(c))
			oneDigit = true;

		if (isupper(c))
			oneUp = true;

		if (islower(c))
			oneLow = true;

		if (!isalnum(c))
			onePunct = true;
	}

	if (minSeven && oneUp && oneLow && oneDigit && onePunct) {
		cout << "\nPassword Valid";
	}
	else {

		cout << "\nPassword Invalid! Reasons:\n";

		if (!minSeven)
			cout << "Password must be at least seven characters long\n";

		if (!oneDigit)
			cout << "Password must have at least one digit\n";

		if (!oneUp) 
			cout << "Password must have at least one uppercase letter\n";

		if (!oneLow)
			cout << "Password must have at least one lowercase letter\n";

		if (!onePunct)
			cout << "Password must have at least one punctuation character";
	}

	cin.ignore();
	cin.get();

	return 0;
}