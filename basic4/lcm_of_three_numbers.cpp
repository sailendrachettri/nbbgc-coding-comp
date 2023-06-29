/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, num3, max;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 and num1 > num3)
        max = num1;
    else if (num2 > num1 and num2 > num3)
        max = num2;
    else
        max = num3;

    while (true)
    {
        if (max % num1 == 0 && max % num2 == 0 && max % num3 == 0)
        {
            cout << max << endl;
            break;
        }
        ++max;
    }

    return 0;
}