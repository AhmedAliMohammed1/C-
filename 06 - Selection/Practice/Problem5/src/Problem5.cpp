//============================================================================
// Name        : Problem5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	auto number {0},sum{0};
	cout<< "Enter a number :";
	cin >> number ;
	if (number < 10000){
		cout<< "This a small number";
	}else {

		sum = number %10 +number %100 +number %1000 ;
		if(sum % 2 ==1 )
			cout<< "This a great number";
		else {
			if ((number %10)%2 == 1 || (number %100)%2 == 1 || (number %1000)%2 == 1 )
				cout<< "This a a good number";
			else
				cout<< "This a bad number";


		}


	}





	return 0;
}
