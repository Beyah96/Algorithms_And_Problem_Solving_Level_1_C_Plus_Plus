#include <iostream>
#include <string>

using namespace std;

enum enGrades{ A = 0, B = 1, C = 2, D = 3, E = 4, F = 5};

int ReadMark() {
	int Mark;
	cout << "Please enter your mark : ";
	cin >> Mark;
	return Mark;
}

enGrades CheckGrade(int Mark) {
	if (Mark >= 90) {
		return enGrades::A;
	}
	else if (Mark >= 80) {
		return enGrades::B;
	}
	else if (Mark >= 70) {
		return enGrades::C;
	}
	else if (Mark >= 60) {
		return enGrades::D;
	}
	else if (Mark >= 50) {
		return enGrades::E;
	}
	else {
		return enGrades::F;
	}
}

void PrintResult(enGrades Grade) {
	cout << "Your grade is : " << char(Grade + 65) << endl;
}

int main() {
	PrintResult(CheckGrade(ReadMark()));
	return 0;
}