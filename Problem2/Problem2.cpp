#include <iostream>
#include <string>

using namespace std;

string ReadName() {
	string Name;
	cout << "Please enter your name : ";
	getline(cin, Name);
	return Name;
}

void PrintName(string Name) {
	cout << "Your name is  : "<< Name << endl;
}
int main() {
	PrintName(ReadName());
	return 0;
}