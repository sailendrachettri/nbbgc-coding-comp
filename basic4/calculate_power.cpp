/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int base, power;
    cout << "Enter a base value and power value: ";
    cin >> base >> power;

    cout << base << " rised to the " << power << " is " << pow(base, power) << endl;

    return 0;
}