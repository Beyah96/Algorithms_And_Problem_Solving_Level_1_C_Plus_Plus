#include <iostream>
#include <string>

using namespace std;

float ReadBillValue() {
	float BillValue;
	cout << "Please enter the bill value : ";
	cin >> BillValue;
	return BillValue;
}

float CalculateServicesFee(float BillValue) {
	return BillValue * 1.1;
}

float CalculateSalesTax(float ServiceFee) {
	return ServiceFee * 1.16;
}

void PrintTotalBill(float TotalBill) {
	cout << "The total Bill after sales tax and services fee is : " << TotalBill;
}

int main() {
	PrintTotalBill(CalculateSalesTax(CalculateServicesFee(ReadBillValue())));
	return 0;
}