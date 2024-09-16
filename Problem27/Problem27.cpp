#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please enter a number : ";
	cin >> Number;
	return Number;
}

void PrintNumberForLoop(int Number) {
	cout << "**************************************" << endl;
	cout << "Print Numbers with for loop :" << endl;
	cout << "**************************************" << endl;
	for (int i = Number ; i > 0; i--)
		cout << i << endl;
}

void PrintNumberWhileLoop(int Number) {
	cout << "**************************************" << endl;
	cout << "Print Numbers with while loop : " << endl;
	cout << "**************************************" << endl;
	int counter = Number;
	while (counter > 0) {
		cout << counter << endl;
		counter--;
	}
}

void PrintNumberDoWhileLoop(int Number) {
	cout << "**************************************" << endl;
	cout << "Print Numbers with do while loop : " << endl;
	cout << "**************************************" << endl;
	int counter = Number;
	do {
		cout << counter << endl;
		counter--;
	} while (counter > 0);

}



int main() {
	int Number = ReadNumber();
	PrintNumberForLoop(Number);
	PrintNumberWhileLoop(Number);
	PrintNumberDoWhileLoop(Number);
	return 0;
}