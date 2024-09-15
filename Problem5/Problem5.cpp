#include <iostream>
#include <string>

using namespace std;
// Hire a driver case 1

struct stInfo {
	short Age;
	bool HasDriverLicense;
	bool HasRecommendation;
};

stInfo ReadInfo() {
	stInfo Info;

	cout << "Please enter your age : ";
	cin >> Info.Age;

	cout << "Do you have a driver license(Yes : 1 / No : 0) : ";
	cin >> Info.HasDriverLicense;

	cout << "Do you have a Recommendation (Yes : 1 / No : 0) : ";
	cin >> Info.HasRecommendation;

	return Info;
}

bool isAccepted(stInfo Info) {
	return (Info.HasRecommendation || (Info.Age >= 21 && Info.HasDriverLicense));
}

void PrintResult(bool Decision) {
	if (Decision) {
		cout << "Hired" << endl;
	}
	else {
		cout << "Rejected" << endl;
	}
}

int main() {
	PrintResult(isAccepted(ReadInfo()));
	return 0;
}