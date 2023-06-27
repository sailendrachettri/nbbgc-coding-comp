/* Date:  - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int firstVal, LastVal;

    cout << "Enter first number: ";
    cin >> firstVal;

    cout << "Enter last number: ";
    cin >> LastVal;

    if (firstVal <= 1)
        firstVal = 2;

    for (int i = firstVal; i <= LastVal; i++)
    {
        bool flag = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}