#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& Number1, int& Number2) {
	cout << "Please enter your first number : ";
	cin >> Number1;

	cout << "Please enter your second Number : ";
	cin >> Number2;
}

int MaxNumber(int Number1, int Number2) {
	if (Number1 > Number2)
		return Number1;
	else
		return Number2;
}

void PrintResult(int Max) {
	cout << "The max of your numbers is : " << Max << endl;
}

int main() {
	int Number1, Number2;
	ReadNumbers(Number1, Number2);
	PrintResult(MaxNumber(Number1, Number2));
}