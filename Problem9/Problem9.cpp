#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int Arr[3]) {
	for (int i = 0; i < 3; i++) {
		cout << "Please enter a number : ";
		cin >> Arr[i];
	}
}

int SumNumbers(int Arr[3]) {
	int Sum = 0;
	for (int i = 0; i < 3; i++) {
		Sum += Arr[i];
	}
	return Sum;
}

void PrintResult(int Arr[3]) {
	cout << "The sum of your given numbers is : " << SumNumbers(Arr);
}
int main() {
	int Arr[3];
	ReadNumbers(Arr);
	PrintResult(Arr);
	return 0;
}