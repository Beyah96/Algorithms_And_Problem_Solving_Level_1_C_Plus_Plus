#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message) {
	int Number;
	cout << Message;
	cin >> Number;
	return Number;
}

int SumNumbers() {
	int Sum = 0, Counter = 1, Number = 0;
	do {
		if (Number == -99)
			break;
		Sum += Number;
		Number = ReadNumber("Pease enter the number "+ to_string(Counter) + " : ");
		Counter++;
	} while (Number != -99);
	return Sum;
}

void PrintResult(int Sum) {
	cout << "Sum result : " << Sum << endl;
}

int main() {
	PrintResult(SumNumbers());
	return 0;
}