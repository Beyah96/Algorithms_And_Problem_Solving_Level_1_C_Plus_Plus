#include <iostream>
#include <string>

using namespace std;

enum enOperationType { ADD = '+', Substract = '-', Multiply = '*', Divide = '/' };


float ReadNumber(string Message) {
	float Number;
	cout << Message;
	cin >> Number;
	return Number;
}

enOperationType ReadOperationType() {
	char Operation;
	cout << "Please enter your operation Type : ";
	cin >> Operation;
	return (enOperationType)Operation;
}

float Calculate(float Number1, float Number2, enOperationType Operation) {
	switch (Operation) {
	case enOperationType::ADD:
		return Number1 + Number2;
	case enOperationType::Divide:
		return Number1 / Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Substract:
		return Number1 - Number2;
	defautl :
		break;
	}
}

void PrintResult(float Result) {
	cout << "The result of your operation is : " << Result << endl;
}

int main() {
	int Number1, Number2;
	Number1 = ReadNumber("Please enter your first number : ");
	Number2 = ReadNumber("Please enter your second number : ");
	PrintResult(Calculate(Number1, Number2, ReadOperationType()));
	return 0;
}