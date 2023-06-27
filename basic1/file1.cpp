/* Date:  - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 12345;
    string str = to_string(num);

    reverse(str.begin(), str.end());

    num = stoi(str);

    cout << num << " " << endl;

    return 0;
}