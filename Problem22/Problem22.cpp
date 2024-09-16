#include <iostream>
#include <string>

using namespace std;

void ReadTriangleSides(float& Side, float& Base) {
	cout << "Enter the side of your isosceles triangle : ";
	cin >> Side;

	cout << "Enter the base of your isosceles triangle : ";
	cin >> Base;
}

float InscribedInIsoscelesTriangleCircleArea(float Side, float Base) {
	const float PI = 3.14;
	return (PI * pow(Base, 2) * (2 * Side - Base)) / (4 * (2 * Side + Base));
}
void PrintArea(float Area) {
	cout << "The area of your circle is : " << Area << endl;
}
int main() {
	float Side, Base;
	ReadTriangleSides(Side, Base);
	PrintArea(InscribedInIsoscelesTriangleCircleArea(Side, Base));
	return 0;
}