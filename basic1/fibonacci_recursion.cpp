#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fibonacci(int, int, int);

int main()
{
    int end;
    cout << "Enter a higest range: ";
    cin >> end;

    cout << 0 << " " << 1 << " ";
    fibonacci(end + 1, 0, 1);

    return 0;
}

void fibonacci(int end, int zero, int one)
{
    int next = 0;

    if (end == 1)
        return;

    next = zero + one;
    zero = one;
    one = next;

    cout << next << " ";

    end = end - 1;
    fibonacci(end, zero, one);
}