/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, hcf, i;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    for (i = 1; i <= num1 and i <= num2; i++)
    {
        if (num1 % i == 0 and num2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << hcf << endl;

    return 0;
}