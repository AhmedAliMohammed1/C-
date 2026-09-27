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
	auto  number1{0},number2{0};
	cin >> number1 >> number2 ;
	if (number1 < number2){
		cout << number1 << " is less than " << number2 ;

	}else if (number1 > number2){
		cout << number2 << " is less than " << number1 ;


	}else {
		cout << number2 << " is equal to  " << number1 ;

	}


	return 0;
}
