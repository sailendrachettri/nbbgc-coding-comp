/* Date: 29 - 06 - 2023
Author: Sailendra Chettri */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter the starting and ending range: ";
    cin >> start >> end;

    if (start <= 1)
        start = 2;

    for (int num = start; num <= end; num++)
    {
        bool flag = true;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << num << " ";
    }

    return 0;
}