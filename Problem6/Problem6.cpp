#include <iostream>
#include <string>

using namespace std;

struct stInfo {
	string FirstName;
	string LastName;
};

stInfo ReadInfo() {
	stInfo Info;

	cout << "Please enter your first name : ";
	cin >> Info.FirstName;
	
	cout << "Please enter your lasst name : ";
	cin >> Info.LastName;

	return Info;
}

string GetFullName(stInfo Info, bool reversed) {
	if (reversed)
		return Info.FirstName + " " + Info.LastName;
	else
		return Info.LastName + " " + Info.FirstName;
}

void PrintInfo(string FullName) {
	cout << "Your full name is : " << FullName;
}

int main() {
	PrintInfo(GetFullName(ReadInfo(), true));
	return 0;
}