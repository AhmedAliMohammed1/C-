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
#define COMPARE_THRESHOLD 100
int main() {
	int numbers[NUMBER_OF_INTERGERS]{0},temp{-1};

	for(unsigned char i=0 ; i<NUMBER_OF_INTERGERS;i++)
	cin >> numbers[i] ;
	if(numbers[0] <COMPARE_THRESHOLD && numbers[0] > temp){
		temp =numbers[0];
	} if (numbers[1] <COMPARE_THRESHOLD && numbers[1] > temp){
		temp =numbers[1];
	} if (numbers[2] <COMPARE_THRESHOLD && numbers[2] > temp){
		temp =numbers[2];
	}
	cout << temp;


	return 0;
}


