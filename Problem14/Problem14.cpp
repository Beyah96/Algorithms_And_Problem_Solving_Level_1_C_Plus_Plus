#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& Number1, int& Number2) {
	cout << "Enter your first number : ";
	cin >> Number1;

	cout << "Enter your second number : ";
	cin >> Number2;
}

void SwapNumbers(int& Number1, int& Number2) {
	int temp = Number1;
	Number1 = Number2;
	Number2 = temp;
}
void PrintNumbers(int Number1, int Number2) {
	cout << "Your numbers are : " << endl << "- Number 1 : " << Number1 << endl << "- Number 2 : " << Number2 << endl;
}	
int main() {
	int Number1, Number2;
	ReadNumbers(Number1, Number2);
	cout << "************* Bofore swap ***************" << endl;
	PrintNumbers(Number1, Number2);
	SwapNumbers(Number1, Number2);
	cout << "************* After swap ***************" << endl;
	PrintNumbers(Number1, Number2);
	
	return 0;
}