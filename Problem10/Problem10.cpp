#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int Arr[3]) {
	for (int i=0; i<=2;i++){
		cout << "please enter a number : ";
		cin >> Arr[i];
	}
}
int SumNumbers(int Arr[3]) {
	int Sum = 0;
	for (int i = 0; i <= 2; i++) {
		Sum += Arr[i];
	}
	return Sum;
}
int AverageNumbers(int Sum) {
	return Sum / 3;
}
void PrintResult(int Average) {
	cout << "The average of your numbers is : " << Average;
}

int main() {
	int Arr[3];
	ReadNumbers(Arr);
	PrintResult(AverageNumbers(SumNumbers(Arr)));
	return 0;
}