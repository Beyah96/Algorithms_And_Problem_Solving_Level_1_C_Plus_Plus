#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadValue(string Message) {
	float Value;
	do{
		cout << Message;
		cin >> Value;
	} while (Value < 0);
	return Value;
}

float CalculateNumberOfMonths(float LoanAmount, float MonthlyPayment) {
	return LoanAmount / MonthlyPayment ;
}

void PrintNumberOfMonths(float NumberOfMonths) {
	cout << ceil(NumberOfMonths) << " Months" << endl;
}

int main() {
	float LoanAmount = ReadValue("Please enter your loan amount : ");
	float MonthlyPayment = ReadValue("Please enter your Monthly Payment : ");
	PrintNumberOfMonths(CalculateNumberOfMonths(LoanAmount, MonthlyPayment));
	return 0;
}