//============================================================================
// Name        : Problem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
unsigned int mod(int number1,int number2);
int main() {
	int number1 , number2 ;
	cin >> number1 >> number2 ;

	cout << mod(number1 , number2 ) ;

	return 0;
}
unsigned int mod(int number1,int number2){




	return number1-(number1/number2)*number2;
}
