#include <iostream>
#include <string>

using namespace std;

enum enMonthsOfYear { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

enMonthsOfYear ReadMonthNumber() {
	int Number;
	do {
		cout << "Please enter the number of your chosen month : ";
		cin >> Number;
	} while (Number < 1 || Number > 12);
	return (enMonthsOfYear) Number;
}

string GetMonthName(enMonthsOfYear MonthNumber) {
	switch (MonthNumber)
	{
	case enMonthsOfYear::January:
		return "January";
	case enMonthsOfYear::February:
		return "February";
	case enMonthsOfYear::March:
		return "March";
	case enMonthsOfYear::April:
		return "April";
	case enMonthsOfYear::May:
		return "May";
	case enMonthsOfYear::June:
		return "June";
	case enMonthsOfYear::July:
		return "July";
	case enMonthsOfYear::August:
		return "August";
	case enMonthsOfYear::September:
		return "September";
	case enMonthsOfYear::October:
		return "October";
	case enMonthsOfYear::November:
		return "November";
	case enMonthsOfYear::December:
		return "December";

	}
}

void PrintMonthName(string MonthName) {
	cout << "Your chosen month is : " << MonthName;
}

int main() {
	PrintMonthName(GetMonthName(ReadMonthNumber()));
}