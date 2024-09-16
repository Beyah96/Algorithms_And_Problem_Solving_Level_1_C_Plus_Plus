#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message) {
	int Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int NumberFactorial(int Number) {
	int Factorial = 1;
	if (Number == 0)
		Factorial = 1;
	else 
	{
		for (int i = 1; i <= Number; i++) {
			Factorial *= i;
		}
	}
	return Factorial;
}

void PrintFactorial(int Factorial) {
	cout << "The factorial of your number is : " << Factorial;
}

int main() {
	PrintFactorial(NumberFactorial(ReadNumber("Please enter enter a positif number : ")));
	return 0;
}