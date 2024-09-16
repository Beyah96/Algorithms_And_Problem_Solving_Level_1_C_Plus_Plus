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

short GetAge(short From, short To) {
	short Age;
	do {
		Age = ReadAge();
	} while (!ValidateAge(Age, From, To));
	return Age;
}

void PrintAge(short Age) {
	cout << "Your chosen age is : " << Age << endl;
}
int main() {
	short From = 18, To = 45;
	PrintAge(GetAge(From, To));
	return 0;
}