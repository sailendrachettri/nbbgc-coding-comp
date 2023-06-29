/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int);

int main()
{
    int num, res;
    cout << "Enter a number to calculate factorial: ";
    cin >> num;

    res = factorial(num);

    cout << "Factorial of a " << num << " is " << res << endl;

    return 0;
}

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return num * factorial(num - 1);
}