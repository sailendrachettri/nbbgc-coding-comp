/* Date:  - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    string temp, tempCopy;
    cout << "Enter a number: ";
    cin >> num;

    temp = to_string(num);
    tempCopy = temp;

    reverse(temp.begin(), temp.end());

    (temp == tempCopy) ? cout << num << " is palindrome" << endl : cout << num << " is not palindrome." << endl;

    return 0;
}