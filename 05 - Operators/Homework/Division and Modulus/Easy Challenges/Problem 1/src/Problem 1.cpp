//============================================================================
// Name        : Problem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define READ_NUMBERS 5

int main() {

	int numbers[READ_NUMBERS] {};

	for (unsigned char counter  = 0 ; counter < READ_NUMBERS ; counter ++){
		cin>>numbers[counter];
	}
	cout<<"Average : " <<
			static_cast<float>((numbers[0]+numbers[1]+numbers[2]+numbers[3]+numbers[4]))/READ_NUMBERS << endl;

	cout<<"Sum of the first 3 numbers divided by he sum of the last 2 numbers : " <<
			static_cast<float>((numbers[0]+numbers[1]+numbers[2]))/(numbers[3]+numbers[4]) << endl;
	cout<<"Average of the first 3 numbers divided by he average of the last 2 numbers : " <<
			(static_cast<float>(((numbers[0]+numbers[1]+numbers[2])))/3)/(static_cast<float>(((numbers[3]+numbers[4])))/2) << endl;








	return 0;
}
