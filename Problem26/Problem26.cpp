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
	for (int i = 1; i <= Number; i++)
		cout << i << endl;
}

void PrintNumberWhileLoop(int Number) {
	cout << "**************************************" << endl;
	cout << "Print Numbers with while loop : " << endl;
	cout << "**************************************" << endl;
	int i = 1;
	while(i<=Number){
		cout << i << endl;
		i++;
	}
}

void PrintNumberDoWhileLoop(int Number) {
	cout << "**************************************" << endl;
	cout << "Print Numbers with do while loop : " << endl;
	cout << "**************************************" << endl;
	int i = 1;
	do {
		cout << i << endl;
		i++;
	} while (i <= Number);
		
}



int main() {
	int Number = ReadNumber();
	PrintNumberForLoop(Number);
	PrintNumberWhileLoop(Number);
	PrintNumberDoWhileLoop(Number);
	return 0;
}