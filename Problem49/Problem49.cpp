#include <iostream>
#include <string>

using namespace std;


short ReadPINCode() {
	short PINCode;

	cout << "Please enter your PIN code : ";
	cin >> PINCode;
	return PINCode;
}

bool CheckPINcode(short PINCode) {
	if (PINCode == 1234)
		return true;
	else
		return false;
}

void PrintResult(bool ValidPINcode) {
	if (ValidPINcode)
		cout << "Your balance is 7500";
	else
		do {
			system("color 4F");
		} while (!CheckPINcode(ReadPINCode()));
	system("color 2F");
}


int main() {
	PrintResult(CheckPINcode(ReadPINCode()));
	return 0;
}