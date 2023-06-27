/* Date:  - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1)
    {
        cout << "Number should be >= 2 " << endl;
        return 0;
    }

    bool flag = true;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }

    flag ? cout << num << " is prime" << endl : cout << num << " is not prime" << endl;

    return 0;
}