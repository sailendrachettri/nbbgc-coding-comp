/* Date:  - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, temp;
    bool flag = true;

    cout << "Enter number: ";
    cin >> num;

    temp = num;

    while (temp != 0)
    {
        int lastDigit = temp % 10;

        if (lastDigit != 0 && lastDigit != 1)
        {
            cout << num << "  is not a binary number." << endl;
            break;
        }

        temp = temp / 10;
        if (temp == 0)
        {
            cout << num << " is a binary number." << endl;
        }
    }

       return 0;
}