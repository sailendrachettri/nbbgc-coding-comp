/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, res;
    cout << "Enter a number to calculate sqare: ";
    cin >> num;

    res = num;
    for (int i = 1; i < 2; i++)
    {
        res *= num;
    }

    cout << "Sqaure of " << num << " is " << res << endl;

    return 0;
}