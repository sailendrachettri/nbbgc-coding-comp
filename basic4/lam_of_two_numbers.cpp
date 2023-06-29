/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, max;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    max = (num1 > num2) ? num1 : num2;

    while (true)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            cout << max << endl;
            break;
        }
        ++max;
    }

    return 0;
}