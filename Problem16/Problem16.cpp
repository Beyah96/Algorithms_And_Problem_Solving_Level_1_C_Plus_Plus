#include <iostream>
#include <string>
#include <cmath>

using namespace std;
void ReadDemensions(float& width, float& diagonal) {
	cout << "Please enter the with of your rectangle : ";
	cin >> width;

	cout << "Please enter the heigh of your rectangle : ";
	cin >> diagonal;
}

float CalculateArea(float width, float diagonal) {
	return width * sqrt(pow(diagonal, 2) - pow(width, 2));
}

void PrintResult(float Area) {
	cout << "The area of your rectangle is : " << Area << endl;
}

int main() {
	float width, diagonal;
	ReadDemensions(width, diagonal);
	PrintResult(CalculateArea(width, diagonal));
	return 0;
}