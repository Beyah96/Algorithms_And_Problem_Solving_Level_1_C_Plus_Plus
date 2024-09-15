#include <iostream>
#include <string>

using namespace std;

enum enPassFail { Pass, Fail };

int ReadMark(){
	int Mark;
	cout << "Please enter your mark : ";
	cin >> Mark;
	return Mark;
}

enPassFail CheckMark(int Mark){
	if (Mark < 50)
		return enPassFail::Fail;
	else
		return enPassFail::Pass;
}

void PrintResult(int Mark) {
	enPassFail Result = CheckMark(Mark);
	if (Result == enPassFail::Fail)
		cout << "Fail";
	else
		cout << "Pass";
	
}

int main() {
	PrintResult(ReadMark());
	return 0;
}