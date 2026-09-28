//============================================================================
// Name        : Problem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define TOTAL_INPUT_NUMBERS 1000
int main() {
	int inputNumber{0},numbers[TOTAL_INPUT_NUMBERS]{0},evenSum{0},oddSum{0},evenCounter{0};
	cin >> inputNumber ;
	for(int i=0;i<inputNumber;i++)
		cin>>numbers[i];
	for(int i=0;i<inputNumber;i++){
		if(i %2 ==0){
			evenSum +=numbers[i];
			evenCounter++;
		}

		else
			oddSum +=numbers[i];

	}
	cout <<"Even Average : " << evenSum/evenCounter << endl <<  (evenCounter)<<endl <<"Odd Average : " << oddSum/(inputNumber-evenCounter) << endl << (inputNumber-evenCounter);

	return 0;
}
