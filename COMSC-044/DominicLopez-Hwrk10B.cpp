/*
	Hwrk10B
	String Counter
	Dominic Lopez

*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int wordLength(char[]);

int main() {

	cout << "Word Counter\nBy Dominic Lopez\n";

	char sentence[100];

	cin.get(sentence, 100);

	cout << "The length of this sentence is: " << wordLength(sentence);

	return 0;
}

int wordLength(char line[]) {

	if (!line[0])
		return 0;

	int length = 0;

	for (int i = 0; i < strlen(line); i++) {
		
		if (isspace(line[i]))
			length++;

	}


	return length + 1;

}