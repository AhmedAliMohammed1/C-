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
	auto numberA{0},numberB{0};
	cin >> numberA >> numberB;
	if (numberA % 2 ==1 && numberB % 2 == 1){
		cout << numberA * numberB ;
	}else if (numberA % 2 ==0 && numberB % 2 == 0){
		cout << numberA / numberB ;
	}else if (numberA % 2 ==1 && numberB % 2 == 0){
		cout << numberA + numberB ;
	}else if (numberA % 2 ==0 && numberB % 2 == 1){
		cout << numberA - numberB ;
	}



	return 0;
}
