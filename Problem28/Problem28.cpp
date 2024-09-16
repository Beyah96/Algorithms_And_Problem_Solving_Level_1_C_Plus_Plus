#include <iostream>
#include <string>

using namespace std;

enum enOddEven{ Even, Odd};

int ReadNumber() {
	int Number;
	cout << "Enter your chosen number : ";
	cin >> Number;
	return Number;
}

enOddEven CheckNumber(int Number) {
	if (Number % 2 == 0) return enOddEven::Even;
	else return enOddEven::Odd;
}

int SumOddNumbers(int Number) {
	int Sum = 0;
	for (int i = 1; i <= Number; i++) {
		if (CheckNumber(i) == enOddEven::Odd)
			Sum += i;
	}
	return Sum;
}

void PrintNumbers(int Number) {
	cout << "The sum of all odd numbers between 1 and your number is : " << Number << endl;
}
int main() {
	PrintNumbers(SumOddNumbers(ReadNumber()));
	return 0;
}