#include <iostream>
#include <string>

using namespace std;
void ReadDemensions(float& width, float& heigh) {
	cout << "Please enter the with of your rectangle : ";
	cin >> width;

	cout << "Please enter the heigh of your rectangle : ";
	cin >> heigh;
}

float CalculateArea(float width, float heigh) {
	return width * heigh;
}

void PrintResult(float Area) {
	cout << "The area of your rectangle is : " << Area << endl;
}

int main() {
	float width, heigh;
	ReadDemensions(width, heigh);
	PrintResult(CalculateArea(width, heigh));
	return 0;
}