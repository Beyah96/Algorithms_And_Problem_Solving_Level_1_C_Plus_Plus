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
	{
		system("color 2F");
		return true;
	}
	else
	{
		system("color 4F");
		return false;
	}
}

void PrintResult(bool ValidPINcode) {
	
	short Counter = 3;
	while (!ValidPINcode) {
		Counter--;
		cout << "Wrong PIN ! You have " + to_string(Counter) + " more try(ies)" << endl;
		if (Counter == 0) {
			cout << "Your card is blocked, Call the bank for help! ";
			break;
		}
		ValidPINcode = CheckPINcode(ReadPINCode());
	} 
	if (ValidPINcode) 
		cout << "Your balance is 7500";
}


int main() {
	PrintResult(CheckPINcode(ReadPINCode()));
	return 0;
}