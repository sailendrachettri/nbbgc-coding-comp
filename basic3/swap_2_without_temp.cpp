/* Date: 28 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two distinct numbers: ";
    cin >> num1 >> num2;

    cout << "num1: " << num1 << endl
         << "num2: " << num2 << endl;

    num1 = num1 + num2; // 4 + 5 = 9
    num2 = num1 - num2; // 9 - 5 = 4
    num1 = num1 - num2; // 9 - 4 = 5

    cout << endl
         << "num1: " << num1 << endl
         << "num2: " << num2 << endl;

    return 0;
}