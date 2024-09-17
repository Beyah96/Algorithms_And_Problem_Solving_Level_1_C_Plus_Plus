#include <iostream>
#include <string>

using namespace std;

void ReadNumberAndPower(int& Number, int& Power) {
	cout << "Please enter a number : ";
	cin >> Number;
	cout << "Please enter the power : ";
	cin >> Power;
}

int CalculatePower(int Number, int Power) {
	int Result = 1;
	if (Power != 0) {
		return 1;
	}
	for (int i = 1; i <= Power; i++) {
		Result *= Number;
	}
	
	return Result;
}

void PrintPower(int Result) {
	cout << "The result of power is : " << Result << endl;
}

int main() {
	int Number, Power;
	ReadNumberAndPower(Number, Power);
	PrintPower(CalculatePower(Number, Power));
	return 0;
}