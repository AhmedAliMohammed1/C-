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
	double input1{0},input2{0};
	char operation{0};
	cout << "Please Enter Number 1 :" ;
	cin >> input1 ;
	cout << "Please Enter the Operation : " ;
	cin >> operation ;
	cout <<"Please Enter Number 2 :" ;
	cin >> input2;

	if (operation == '+'){
		cout << "Result of " << input1 << operation << input2 << "= "<< input2+input1 ;
	}else if (operation == '-'){
		cout << "Result of " << input1 << operation << input2 <<  "= "<<input1-input2 ;

	}else if (operation == '/'){
		cout << "Result of " << input1 << operation << input2 << "= "<< input1/input2;

	}else if (operation == '*'){
		cout << "Result of " << input1 << operation << input2 <<  "= "<<input1*input2;

	}
	return 0;
}
