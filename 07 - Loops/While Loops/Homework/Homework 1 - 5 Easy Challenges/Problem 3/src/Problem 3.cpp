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
	int inputNumber{0},temp{0};
	cin >> inputNumber ;
	while(temp <=  inputNumber){
		for(int i =0;i<temp;i++)
				cout << '*';
		cout << "\n";

	temp++;
	}

	return 0;
}
