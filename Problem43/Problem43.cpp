#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stTimeComponents {
	int Days, Hours, Minutes, Seconds;
};


	
int ReadNumberOfSeconds() {
	int NumberOfSeconds;
	cout << "Please enter the number of seconds : ";
	cin >> NumberOfSeconds;
	return NumberOfSeconds;
}



stTimeComponents GetDurationDetails(int TotalNumbrOfSeconds) {

	const int NumberOfSencondsPerMinute = 60;
	const int NumberOfSencondsPerHour = 60 * NumberOfSencondsPerMinute;
	const int NumberOfSencondsPerDay = 24 * NumberOfSencondsPerHour;

	stTimeComponents DurationDetails;

	DurationDetails.Days = floor(TotalNumbrOfSeconds / NumberOfSencondsPerDay);
	int Remainder = TotalNumbrOfSeconds % NumberOfSencondsPerDay;

	DurationDetails.Hours = floor (Remainder / NumberOfSencondsPerHour);
	Remainder %= NumberOfSencondsPerHour;

	DurationDetails.Minutes = floor (Remainder / NumberOfSencondsPerMinute);
	
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