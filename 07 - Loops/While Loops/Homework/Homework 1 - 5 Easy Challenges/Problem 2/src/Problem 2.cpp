//============================================================================
// Name        : Problem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main() {
	int inputNumber{0};
	char inputChar{0};
	cin >> inputNumber >> inputChar;
	while(inputNumber > 0){
	cout << inputChar;
	inputNumber--;
	}

	return 0;
}
