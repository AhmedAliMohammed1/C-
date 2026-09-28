//============================================================================
// Name        : Problem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define TOTAL_INPUT_NUMBER 2
int main() {
	int numbers[TOTAL_INPUT_NUMBER]{0};
	for (int i=0;i<TOTAL_INPUT_NUMBER;i++)
		cin >> numbers[i];
	while(numbers[0]<= numbers[1]){
		cout<<numbers[0]++<< endl;
	}

	return 0;
}
