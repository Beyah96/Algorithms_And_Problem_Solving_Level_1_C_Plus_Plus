#include <iostream>
#include <string>
#include <cmath>

using namespace std; 

void PrintLetterAtoZ() {
	for (int i = 0; i <= 25; i++)
		cout << char(i + 65) << endl;
}
int main() {
	PrintLetterAtoZ();
	return 0;
}