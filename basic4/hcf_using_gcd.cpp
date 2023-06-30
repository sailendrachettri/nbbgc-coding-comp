/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int result(int, int);

int main()
{
    int num1, num2, res;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    res = result(num1, num2);
    cout << "HCF of " << num1 << " and " << num2 << " is " << res << endl;

    return 0;
}

int result(int num1, int num2)
{
    static int i = 1;
    int res;

    if (num1 % i == 0 and num2 % i == 0)
    {
        res = i;
    }

    if (i >= num1 and i >= num2)
    {
        return res;
    }
    result(++i);
}