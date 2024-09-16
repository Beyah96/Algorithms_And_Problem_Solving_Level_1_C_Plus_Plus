#include <iostream>
#include <cmath>

using namespace std;

float ReadCircumference() {
	float Circumference;
	cout << "Please enter the circumference of your circle : ";
	cin >> Circumference;
	return Circumference;
}

float CircleAreaByCircumference(float Circumference) {
	const float PI = 3.14;
	return pow(Circumference, 2) / (4 * PI);
}

void PrintArea(float Area) {
	cout << "The area of your circle is : " << Area << endl;
}

int main() {
	PrintArea(CircleAreaByCircumference(ReadCircumference()));
	return 0;
}