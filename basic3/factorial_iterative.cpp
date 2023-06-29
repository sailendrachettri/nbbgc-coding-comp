/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, res = 1;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        res *= i;
    }

    cout << "Factorial of " << num << " is " << res << endl;
    return 0;
}