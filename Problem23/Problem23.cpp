// Circle area described around an arbitrary triangle

#include <iostream>
#include <string>

using namespace std;

void ReadTriangleSides(float& Side1, float& Side2, float& Side3) {
	cout << "Please enter the first side of the triangle : ";
	cin >> Side1;
	
	cout << "Please enter the second side of the triangle : ";
	cin >> Side2;

	cout << "Please enter the third side of the triangle : ";
	cin >> Side3;
}

float DescribedTriangleCircleArea(float Side1, float Side2, float Side3) {
	const float PI = 3.14;
	float P = (Side1 + Side2 + Side3) / 2;
	float Radius = (Side1 * Side2 * Side3) / (4 * sqrt(P * (P - Side1) * (P - Side2) * (P - Side3)));
	return PI * pow(Radius, 2);
}

void PrintArea(float Area) {
	cout << "The area of your circle is : " << Area << endl;
}
int main() {
	float Side1, Side2, Side3;
	ReadTriangleSides(Side1, Side2, Side3);
	PrintArea(DescribedTriangleCircleArea(Side1, Side2, Side3));
	return 0;
}