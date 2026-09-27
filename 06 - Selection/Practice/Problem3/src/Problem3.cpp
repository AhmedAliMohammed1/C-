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
	auto  number1{0},number2{0},number3{0};
	cin >> number1 >> number2 >> number3 ;
	if (number1 < number2 && number1 < number3){
		cout << number1 << " is the minimum " ;

	}else if (number2 < number1 &&number2 < number3){
		cout << number2 << " is the minimum " ;


	}else {
		cout << number3 << " is the minimum " ;

	}


	return 0;
}
