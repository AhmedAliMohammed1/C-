//============================================================================
// Name        : Problem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define TOTAL_NUMBERS 6
int main() {
	int numbers[TOTAL_NUMBERS]{0} ,lessThanCounter{0};
	for(unsigned char i =0; i<TOTAL_NUMBERS ;i++)
		cin >>numbers[i];
	for(unsigned char i =0; i<TOTAL_NUMBERS ;i++){
			if(numbers[0] > numbers[i])
				lessThanCounter++;
	}

	cout<< lessThanCounter <<" "<<TOTAL_NUMBERS -lessThanCounter-1;

	return 0;
}
