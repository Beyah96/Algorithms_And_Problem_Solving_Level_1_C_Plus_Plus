#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please enter your number : ";
	cin >> Number;
	return Number;
}
float CalculateHalfNumber(int Number) {
	return (float) Number / 2;
}

void PrintResult(int Number) {
	string Result;
	Result = "Half of " + to_string(Number)+" is "+to_string(CalculateHalfNumber(Number));
	cout << Result << endl;
}

int main() {
	PrintResult(ReadNumber());
	return 0;
}