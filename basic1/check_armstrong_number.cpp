/* Date:  - 07 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num, res = 0;
    string temp;
    vector<int> v;

    cout << "Enter a number: ";
    cin >> num;

    temp = to_string(num);

    for (int i = 0; i < temp.length(); i++)
    {
        v.push_back(temp[i]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        res += pow(int(v[i]) - 48, 3);
    }

    cout << "res: " << res << endl;

    if (res == num)
        cout << num << " is an armstrong number" << endl;
    else
        cout << num << " is not an armstrong number" << endl;

    return 0;
}