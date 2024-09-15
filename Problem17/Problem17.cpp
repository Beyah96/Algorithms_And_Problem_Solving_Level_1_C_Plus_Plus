#include <iostream>
#include <string>
#include <cmath>

using namespace std;
void ReadDemensions(float& base, float& heigh) {
	cout << "Please enter the base of your triangle : ";
	cin >> base;

	cout << "Please enter the heigh of your triangle : ";
	cin >> heigh;
}

float CalculateTriangleArea(float base, float heigh) {
	return (base * heigh) / 2;
}

void PrintResult(float Area) {
	cout << "The area of your triangle is : " << Area << endl;
}

int main() {
	float base, heigh;
	ReadDemensions(base, heigh);
	PrintResult(CalculateTriangleArea(base, heigh));
	return 0;
}