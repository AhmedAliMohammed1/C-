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
	int inputNumber{0};
	cin >> inputNumber ;
    for(int row=1;row<= inputNumber;row++){
        for(int column=1;column<=inputNumber;column++){
            if(column %2 ==1)
            cout <<"*";
            else 
            cout <<" ";

        }
         cout <<endl;

    }
	return 0;
}
