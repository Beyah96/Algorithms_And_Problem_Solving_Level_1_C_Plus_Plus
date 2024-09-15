#include <iostream>
#include <string>
#include <cmath>

using namespace std;
float ReadRadius() {
	float Radius;
	cout << "Please enter the radius : ";
	cin >> Radius;
	return Radius;
}

float CalculateCircleArea(float radius) {
	const float PI = 3.14;
	return PI * pow(radius, 2);
}

void PrintResult(float Area) {
	cout << "The area of your circle is : " << Area << endl;
}

int main() {
	
	PrintResult(CalculateCircleArea(ReadRadius()));
	return 0;
}