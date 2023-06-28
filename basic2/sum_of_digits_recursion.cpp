/* Date:  - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int digits, sum = 0;
    cout << "Enter number: ";
    cin >> digits;

    while (digits != 0)
    {
        int lastDigit = digits % 10;
        sum += lastDigit;

        digits = digits / 10;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}