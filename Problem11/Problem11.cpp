#include <iostream>
#include <string>

using namespace std;

enum enPassed{Pass, Fail};

void ReadNumbers(int Arr[3]) {
	for (int i = 0; i <= 2; i++) {
		cout << "Please enter a number : ";
		cin >> Arr[i];
	}
}
int CalculateSum(int Arr[3]) {
	int Sum = 0;
	for (int i = 0; i <= 2; i++) {
		Sum += Arr[i];
	}

	
	return Sum;
}
int CalculateAverage(int Sum) {
	return Sum / 3;
}
enPassed IsPassed(int Average) {
	cout << "Your average is : " << Average << endl;
	if (Average >= 50)
		return enPassed::Pass;
	else
		return enPassed::Fail;
}
void PrintResult(enPassed Decision) {
	if (Decision == enPassed::Pass)
		cout << "Pass";
	else
		cout << "Fail";

}

int main() {
	int Arr[3];
	ReadNumbers(Arr);
	PrintResult(IsPassed(CalculateAverage(CalculateSum(Arr))));
	return 0;
}