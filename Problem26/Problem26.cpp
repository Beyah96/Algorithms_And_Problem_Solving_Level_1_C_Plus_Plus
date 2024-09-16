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
	int counter = 1;
	while(counter <=Number){
		cout << counter << endl;
		counter++;
	}
}

void PrintNumberDoWhileLoop(int Number) {
	cout << "**************************************" << endl;
	cout << "Print Numbers with do while loop : " << endl;
	cout << "**************************************" << endl;
	int counter = 1;
	do {
		cout << counter << endl;
		counter++;
	} while (counter <= Number);
		
}



int main() {
	int Number = ReadNumber();
	PrintNumberForLoop(Number);
	PrintNumberWhileLoop(Number);
	PrintNumberDoWhileLoop(Number);
	return 0;
}