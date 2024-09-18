#include <iostream>
#include <string>

using namespace std;

float ReadValue(string Message) {
	int Value;
	cout << Message;
	cin >> Value;
	return Value;
}

float CalculateMonthlyInstallmentAmount(float LoanAmount, float Months) {
	return LoanAmount / Months;
}

void PrintMonthlyInstallmentAmount(float MonthlyInstallmentAmount) {
	cout << "Your mounthly installment amount is : " << MonthlyInstallmentAmount << endl;
}
int main() {
	float LoanAmount = ReadValue("Please enter your loan amount : ");
	float Months = ReadValue("Please enter how many mounth you need to settle the loan : ");
	PrintMonthlyInstallmentAmount(CalculateMonthlyInstallmentAmount(LoanAmount, Months));
	return 0;
}