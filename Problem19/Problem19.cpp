#include <iostream>
#include <string>
#include <cmath>

using namespace std;
float ReadRadius() {
	float Diameter;
	cout << "Please enter the radius : ";
	cin >> Diameter;
	return Diameter;
}

float CircleAreaByDiameter(float Diameter) {
	const float PI = 3.14;
	return (PI * pow(Diameter, 2)) / 4;
}

void PrintResult(float Area) {
	cout << "The area of your circle is : " << Area << endl;
}

int main() {

	PrintResult(CircleAreaByDiameter(ReadRadius()));
	return 0;
}