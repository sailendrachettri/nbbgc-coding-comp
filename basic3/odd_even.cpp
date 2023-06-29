/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    (num & 1) ? cout << num << " is Odd." << endl : cout << num << " is Even." << endl;

    return 0;
}