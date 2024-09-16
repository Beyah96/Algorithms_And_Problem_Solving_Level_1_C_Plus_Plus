#include <iostream>
#include <cmath>

using namespace std;

short ReadAge() {
	short Age;
	cout << "Please enter your age  : ";
	cin >> Age;
	return Age;
}

bool ValidateAge(short Age, short From, short To) {
	return (Age >= From && Age <= To);
}

void PrintResult(bool valid) {
	if (valid)
		cout << "Validate age !";
	else
		cout << "Invalid age !";
}
int main() {
	short From = 18, To = 45;
	PrintResult(ValidateAge(ReadAge(), From, To));
	return 0;
}