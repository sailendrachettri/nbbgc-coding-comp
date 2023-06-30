/* Date: 30 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findHcf(int, int);

int main()
{
    // lcm
    int num1, num2, hcf;
    cout << "Enter two number: ";
    cin >> num1 >> num2;

    hcf = findHcf(num1, num2);

    cout << "Hcf of " << num1 << " and " << num2 << " is " << hcf << endl;

    return 0;
}

int findHcf(int x1, int x2)
{

    if (x2 == 0)
    {
        return x1;
    }
    return findHcf(x2, x1 % x2);
}