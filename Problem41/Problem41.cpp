#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumberOfHours() {
	int NumberOfHours;
	cout << "Please enter the number of Hours : ";
	cin >> NumberOfHours;
	return NumberOfHours;
}

float CalculateNumberOfDays(int NumberOfHours) {
	return (float) NumberOfHours / 24;
}

float CalculateNumberOfWeeks(float NumberOfDays) {
	return NumberOfDays / 7;
}

void PrintNumberOfDaysAndWeeks(float NumberOfDays, float NumberOfWeeks) {
	cout << to_string(NumberOfWeeks) + " Weeks" << endl;
	cout << to_string(NumberOfDays) + " Days" << endl;
}

int main() {
	float NumberOfDays = CalculateNumberOfDays(ReadNumberOfHours());
	PrintNumberOfDaysAndWeeks(NumberOfDays, CalculateNumberOfWeeks(NumberOfDays));
	return 0;
}