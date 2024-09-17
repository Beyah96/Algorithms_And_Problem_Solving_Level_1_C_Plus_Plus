#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimeOrComopsiteNumber{ Prime, Composite};

int ReadPositiveNumber() {
	int Number;
	do{
		cout << "Please enter a positive Number : ";
		cin >> Number;
	} while (Number < 0);
	return Number;
}

enPrimeOrComopsiteNumber CheckNumber(int Number) {
	if (Number >= 4){
		for (int i = 2; i < floor(sqrt(Number))+1; i++) {
			if (Number % i == 0)
				return enPrimeOrComopsiteNumber::Composite;
		}
	}
	return enPrimeOrComopsiteNumber::Prime;
}

void PrintResult(enPrimeOrComopsiteNumber Value) {
	if (Value == enPrimeOrComopsiteNumber::Composite)
		cout << "Composite Number";
	else
		cout << "Prime Number";
}



int main() {
	PrintResult(CheckNumber(ReadPositiveNumber()));
	return 0;
}