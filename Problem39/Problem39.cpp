#include <iostream>
#include <string>

using namespace std;

float ReadValue(string Message) {
	float Value;
	cout << Message;
	cin >> Value;
	return Value;
}

float Calculate() {
	float TotalBill, CashPaid;
	TotalBill = ReadValue("Please enter the total bill : ");
	CashPaid = ReadValue("Please enter the cash paid : ");
	return CashPaid - TotalBill;
}

void PrintRemainder(float Remainder) {
	cout << "The remainder to be paid back is : " << Remainder;
}
int main() {
	PrintRemainder(Calculate());
	return 0;
}