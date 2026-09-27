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
	auto  number{0};
	cin >> number  ;
	if (number % 2 ==0){
		cout << number%10   ;

	}else{
		if (number <1000){
			cout << number%100  ;
		}else if (number > 1000 && number < 1000000){
			cout << number%10000  ;

		}else{
			cout << -number  ;

		}

	}


	return 0;
}
