#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& Number1, int& Number2, int&Number3) {
	cout << "Please enter your first number : ";
	cin >> Number1;

	cout << "Please enter your second number : ";
	cin >> Number2;

	cout << "Please enter your third number : ";
	cin >> Number3;
}

int MaxOfTwoNumbers(int Number1, int Number2) {
	if (Number1 > Number2)
		return Number1;
	else
		return Number2;
}
int MaxOfThreeNumbers(int Number1, int Number2, int Number3) {
	return MaxOfTwoNumbers(MaxOfTwoNumbers(Number1, Number2), Number3);
}

void PrintResult(int Max) {
	cout << "The max of your numbers is : " << Max << endl;
}

int main() {
	int Number1, Number2, Number3;
	ReadNumbers(Number1, Number2, Number3);
	PrintResult(MaxOfThreeNumbers(Number1, Number2, Number3));
}