#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int zero = 0, one = 1, end, res;
    cout << "Enter the higest range: ";
    cin >> end;

    cout << zero << " " << one << " ";

    for (int i = 0; i < end; i++)
    {
        res = zero + one;
        zero = one;
        one = res;

        cout << res << " ";
    }
    cout << endl;

    return 0;
}