//============================================================================
// Name        : Problem.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main()
{
    int counter{0};
    for (int x = 50; x <= 300; x++)
    {
        int start = 0;

        if (x < 70)
        {
            start = 70;
        }
        else
        {
            start = x + 1;
        }
        for (int y = start; y <= 400; y++)
        {
            if ((x + y) % 7 == 0)
                counter++;
        }
    }
    cout << counter;

    return 0;
}
