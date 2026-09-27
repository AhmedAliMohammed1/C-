//============================================================================
// Name        : Problem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define NUMBER_OF_INTERGERS 3
int main() {
	int numbers[NUMBER_OF_INTERGERS]{0};
	for(unsigned char i=0 ; i<NUMBER_OF_INTERGERS;i++)
	cin >> numbers[i] ;
	if (numbers[0] < numbers[1] && numbers[0]  < numbers[2]){
		if(numbers[1]<numbers[2]){
			cout << numbers[0] << " " << numbers[1]<< " " << numbers[2];
		}else
			cout << numbers[0] << " " << numbers[2]<< " " << numbers[1];

	}else if (numbers[1] < numbers[0] && numbers[1]  < numbers[2]){
		if(numbers[0]<numbers[2]){
			cout << numbers[1] << " " << numbers[0]<< " " << numbers[2];
		}else
			cout << numbers[1] << " " << numbers[2]<< " " << numbers[0];
	}else {
		if(numbers[1]<numbers[0]){
			cout << numbers[2] << " " << numbers[1]<< " " << numbers[0];
		}else
			cout << numbers[2] << " " << numbers[0]<< " " << numbers[1];
	}

	return 0;
}


