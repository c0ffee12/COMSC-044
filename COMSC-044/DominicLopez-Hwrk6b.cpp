#include <iostream>
#include <iomanip>

using namespace std;

long long int nextFibo(long long int, long long int);

long long fibPrev = 1, fibCurr = 1;

int main() {

	int fibValues;

	cout << "How many numbers in the Fibonacci Sequence do you want?";

	do {
		cin >> fibValues;

		if (fibValues < 1 || fibValues > 46)
			cout << "Enter a number between 1 and 46!";

	} while (fibValues < 1 || fibValues > 46);


	for (int i = 0; i < fibValues; i++) {

		if (i == 0 || i == 1) {
			cout << "1\n";
		}

		else {

			cout << nextFibo(fibPrev, fibCurr) << "\n";

			long long int buffer;

			buffer = fibPrev;

			fibPrev = fibCurr;
			fibCurr = nextFibo(buffer, fibCurr);
			
			

		}

	}



}

long long int nextFibo(long long int i, long long int j) {
	return i + j;
}