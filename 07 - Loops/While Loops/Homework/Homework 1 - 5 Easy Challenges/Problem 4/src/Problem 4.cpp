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
	cin >> inputNumber ;
	while(inputNumber >  0){
		for(int i =inputNumber;i>0;i--)
				cout << '*';
		cout << "\n";
		inputNumber--;
	}

	return 0;
}
