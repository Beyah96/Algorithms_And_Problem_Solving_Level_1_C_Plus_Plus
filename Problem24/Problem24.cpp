#include <iostream>
#include <cmath>

using namespace std;

short ReadAge() {
	short Age;
	cout << "Please enter your age  : ";
	cin >> Age;
	return Age;
}

bool ValidateAge(short Age) {
	if (Age >= 18 && Age <= 45) 
		return true;
	else
		return false;
}

void PrintResult(bool valid) {
	if (valid)
		cout << "Validate age !";
	else
		cout << "Invalid age !";
}
int main() {
	PrintResult(ValidateAge(ReadAge()));
	return 0;
}