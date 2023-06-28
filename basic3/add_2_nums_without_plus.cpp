/* Date: 28 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    for (int i = 1; i <= num2; i++)
    {
        num1++;
    }

    cout << "Sum is: " << num1 << endl;

    return 0;
}