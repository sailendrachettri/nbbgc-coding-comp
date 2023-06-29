/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 3; i++)
    {
        int val;
        cout << "Enter a number: ";
        cin >> val;

        v.push_back(val);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < 3; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl
         << v[0] << " is smallest." << endl;
}