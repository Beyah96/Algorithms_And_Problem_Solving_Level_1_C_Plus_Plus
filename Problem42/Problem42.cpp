#include <iostream>
#include <string>

using namespace std;

struct stDuration {
	int Days;
	int Hours;
	int Minutes;
	int Seconds;
};

stDuration ReadDuration() {
	stDuration Duration;

	cout << "Please enter the number of Days : ";
	cin >> Duration.Days;

	cout << "Please enter the number of Hours : ";
	cin >> Duration.Hours;

	cout << "Please enter the number of Minutes : ";
	cin >> Duration.Minutes;

	cout << "Please enter the number of Seconds : ";
	cin >> Duration.Seconds;

	return Duration;
}

int MinutesToSeconds(int Minutes) {
	return 60 * Minutes;
}

int HoursToSeconds(int Hours) {
	return 60 * MinutesToSeconds(Hours);
}

int DaysToSeconds(int Days) {
	return 24 * HoursToSeconds(Days);
}

int DurationInSeconds(stDuration Duration) {

	return DaysToSeconds(Duration.Days) + HoursToSeconds(Duration.Hours) + MinutesToSeconds(Duration.Minutes) + Duration.Seconds;
}

void PrintDuration(int TotalDuration) {
	cout << "The total duration is seconds : " << TotalDuration << " Seconds" << endl;
	
}

int main() {

	PrintDuration(DurationInSeconds(ReadDuration()));
	return 0;
}