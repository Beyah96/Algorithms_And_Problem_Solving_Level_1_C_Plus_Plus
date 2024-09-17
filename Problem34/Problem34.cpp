#include <iostream>
#include <string>

using namespace std;

float ReadTotalSales() {
	float TotalSales;
	cout << "Please enter your total sales : ";
	cin >> TotalSales;
	return TotalSales;
}

float PercentageCalculation(float TotalSales) {
	if (TotalSales > 1e6)
		return 0.01;
	else if (TotalSales > 5e5)
		return 0.02;
	else if (TotalSales > 1e5)
		return 0.03;
	else if (TotalSales > 5e4)
		return 0.05;
	else
		return 0;
}

void PrintComission(float TotalSales, float Percentage) {
	cout << "Your commision is : " << TotalSales * Percentage << endl;
}
int main() {
	float TotalSales = ReadTotalSales();
	PrintComission(TotalSales, PercentageCalculation(TotalSales));
	return 0;
}