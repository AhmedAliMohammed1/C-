//============================================================================
// Name        : Problem2.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define READ_NUMBERS 2

int main() {
	double numbers[READ_NUMBERS]  {};
	cin >> numbers[0] >> numbers[1];
	numbers[0] =201; numbers[1] = 25;
	float output = (numbers[0])/numbers[1];

	cout << output - static_cast<int>(output);

	return 0;
}



