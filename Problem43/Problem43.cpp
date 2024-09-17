#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stTimeComponents {
	int Days;
	int Hours;
	int Minutes;
	int Seconds;
};


	
int ReadNumberOfSeconds() {
	int NumberOfSeconds;
	cout << "Please enter the number of seconds : ";
	cin >> NumberOfSeconds;
	return NumberOfSeconds;
}



stTimeComponents GetDurationDetails(int TotalNumbrOfSeconds) {

	int NumberOfSencondsPerMinute = 60;
	int NumberOfSencondsPerHour = 60 * NumberOfSencondsPerMinute;
	int NumberOfSencondsPerDay = 24 * NumberOfSencondsPerHour;

	stTimeComponents DurationDetails;

	DurationDetails.Days = TotalNumbrOfSeconds / NumberOfSencondsPerDay;
	int Remainder = TotalNumbrOfSeconds % NumberOfSencondsPerDay;

	DurationDetails.Hours = Remainder / NumberOfSencondsPerHour;
	Remainder %= NumberOfSencondsPerHour;

	DurationDetails.Minutes = Remainder / NumberOfSencondsPerMinute;
	
	DurationDetails.Seconds = Remainder % NumberOfSencondsPerMinute;
	
	return DurationDetails;
}

void PrintTimpeComponents(stTimeComponents TimeComopnents) {
	cout << TimeComopnents.Days << ":" << TimeComopnents.Hours << ":" << TimeComopnents.Minutes << ":" << TimeComopnents.Seconds << endl;
}


int main() {
	PrintTimpeComponents(GetDurationDetails(ReadNumberOfSeconds()));
	return 0;

}