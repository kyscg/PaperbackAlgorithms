/*
 * Name:        hornersRule.cpp
 * Description: Implementation of Horner's Rule for polynomial evaluation
 * Author:      kyscg
 */

#include <bits/stdc++.h>
using namespace std;

void hornerRule(int a[], int n, int x)
{
    int y = 0;
    for (int i = n - 1; i > -1; i--)
        y = (y + a[i]) * x;

    cout << "y = " << y;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // cout << "Number of terms:";
    int n;
    cin >> n;

    // cout << "Enter the coefficients:\n";
    int a[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // cout << "Enter value of x";
    int x;
    cin >> x;

    // output: sorted array
    hornerRule(a, n, x);

    cout << "\n";
    return 0;
}
