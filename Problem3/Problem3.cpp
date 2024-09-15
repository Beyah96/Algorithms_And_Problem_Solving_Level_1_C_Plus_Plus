#include <iostream>
#include <string>

using namespace std;

enum enNumberType { Odd, Even};

int ReadNumberType() {
	int Number;
	cout << "Please enter your number : ";
	cin >> Number;

	return Number;
}

enNumberType CheckNumberType(int Number) {
	int result = Number % 2;
	if (result == 0) {
		return enNumberType::Even;
	}
	else {
		return enNumberType::Odd;
	}
}

void PrintNumberType(enNumberType NumberType) {
	if (NumberType == enNumberType::Even) {
		cout << "Your number is Even" << endl;
	}
	else {
		cout << "Your number is Odd" << endl;
	}
}
//Check Odd or Even

int main() {
	PrintNumberType(CheckNumberType(ReadNumberType()));
	return 0;
}