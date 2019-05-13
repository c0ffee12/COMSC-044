/*
	Dominic Lopez
	File Decrypter
	Homework 12B
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	cout << "Dominic Lopez\nFile Decrypter \n Homework 12B\n\n";

	ifstream file;
	string line, code, decrypt;

	file.open("Gobblygook.txt");

	
	while (file >> line) {
		if (code == "")
			code = line;
		else
			code = code + " " + line;
	}

	cout << "Encrypted code:\n" << code << "\n\n";

	for (int i = 0; i < code.length(); i++) {
		decrypt = decrypt + (char)((int)code[i] - 10);
	}

	cout << "Decrypted code:\n" << decrypt;

	cin.ignore();
	cin.get();
}
