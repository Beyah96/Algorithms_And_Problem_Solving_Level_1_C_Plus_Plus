#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int Number;
	cout << "Enter your chosen number: ";
	cin >> Number;
	return Number;
}

int PowerOfTwo(int Number) {
	return Number * Number;
}

int PowerOfThree(int Number) {
	return Number * PowerOfTwo(Number) ;
}

int PowerOfFour(int Number) {
	return Number * PowerOfThree(Number);
}

void PrintPowers(int Number) {
	cout << to_string(Number) + " to the power of Two is : " + to_string(PowerOfTwo(Number)) << endl;
	cout << to_string(Number) + " to the power of Three is : " + to_string(PowerOfThree(Number)) << endl;
	cout << to_string(Number) + " to the power of Four is : " + to_string(PowerOfFour(Number)) << endl;
}

int main() {
	PrintPowers(ReadNumber());
}