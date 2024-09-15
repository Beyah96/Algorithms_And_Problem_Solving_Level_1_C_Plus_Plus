#include <iostream>
#include <string>
#include <cmath>

using namespace std;
float ReadSquareSide() {
	float Side;
	cout << "Please enter the radius : ";
	cin >> Side;
	return Side;
}

float InsribedCircleInSquareAreaBySide(float Side) {
	const float PI = 3.14;
	return (PI * pow(Side, 2)) / 4;
}

void PrintResult(float Area) {
	cout << "The area of your circle is : " << Area << endl;
}

int main() {

	PrintResult(InsribedCircleInSquareAreaBySide(ReadSquareSide()));
	return 0;
}