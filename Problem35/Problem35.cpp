#include <iostream>
#include <string>

using namespace std;

struct stPiggyBankContent {
	int Penny;
	int Nickel;
	int Dime;
	int Quarter;
	int Dollar;
};

stPiggyBankContent ReadCoins() {

	stPiggyBankContent MyPiggy;

	cout << "Please enter the number of Pennies : ";
	cin >> MyPiggy.Penny;
	
	cout << "Please enter the number of Nickels : ";
	cin >> MyPiggy.Nickel;
	
	cout << "Please enter the number of Dimes : ";
	cin >> MyPiggy.Dime;
	
	cout << "Please enter the number of Quarters : ";
	cin >> MyPiggy.Quarter;
	
	cout << "Please enter the number of Dollars : ";
	cin >> MyPiggy.Dollar;
	
	return MyPiggy;
}

int CalculatePennies(stPiggyBankContent MyPiggy) {
	return MyPiggy.Penny + 5 * MyPiggy.Nickel + 10 * MyPiggy.Dime + 25 * MyPiggy.Quarter + 100 * MyPiggy.Dollar;
}

float CalculateDollars(int Pennies) {
	return (float) Pennies / 100 ;
}

void PrintDetails(int Pennies, float Dollars) {
	cout << "Total Pennies " + to_string(Pennies) + " Pennies" << endl;
	cout << "Total Dollars " + to_string(Dollars) + " Dollars" << endl;
}
int main() {
	int Pennies = CalculatePennies(ReadCoins());
	PrintDetails(Pennies, CalculateDollars(Pennies));
	return 0;
}