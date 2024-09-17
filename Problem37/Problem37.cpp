#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please enter a Number : ";
	cin >> Number;
	return Number;
}

int SumNumbers(int Number) {
	int Sum = 0;
	while(Number != -99){
		Sum += Number;
		Number = ReadNumber();
	}
	return Sum;
}

void PrintResult(int Sum) {
	cout << "Sum result : " << Sum << endl;
}

int main() {
	PrintResult(SumNumbers(ReadNumber()));
	return 0;
}