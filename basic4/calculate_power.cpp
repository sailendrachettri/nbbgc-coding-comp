/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int calculate(int, int);

int main()
{
    int base, power;
    cout << "Enter a base value and power value: ";
    cin >> base >> power;

    cout << base << " rised to the " << power << " is " << calculate(base, power) << endl;

    return 0;
}

int calculate(int base, int power)
{
    int res = base;
    for (int i = 1; i < power; i++)
    {
        // cout << "i: " << i << endl;
        res = base * res;
    }

    return res;
}