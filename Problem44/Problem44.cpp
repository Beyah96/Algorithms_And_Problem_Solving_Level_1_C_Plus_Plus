#include <iostream>
#include <string>

using namespace std;

enum enDaysOfWeek { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };

int ReadDayNumber() {
	int Number;
	do {
		cout << "Please enter the day's number (from 1 to 7) : ";
		cin >> Number;
	} while (Number > 7 || Number < 1);
	return Number;
}

string GetDayName(int Number) {
	enDaysOfWeek Day;
	switch (Number) {
	case enDaysOfWeek::Sunday:
		return "Sunday";

	case enDaysOfWeek::Monday:
		return "Monday";
	
	case enDaysOfWeek::Tuesday:
		return "Tuesday";
	case enDaysOfWeek::Wednesday:
		return "Wednesday";
		
	case enDaysOfWeek::Thursday:
		return "Thursday";
	
	case enDaysOfWeek::Friday:
		return "Friday";
		
	case enDaysOfWeek::Saturday:
		return "Saturday";
	}
}

void PrintDay(string DayName) {
	cout << "The number entered correspond to : " << DayName;
}

int main() {
	PrintDay(GetDayName(ReadDayNumber()));
	return 0;
}