/*
 * Name:        linearSearch.cpp
 * Description: Implementation of the linear search algorithm
 * Author:      kyscg
 */

#include <bits/stdc++.h>
using namespace std;

string linSearch(int a[], int v, int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] == v)
            return to_string(i);
    return "NIL";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // cout << "Number of keys:";
    int n;
    cin >> n;

    // cout << "Enter the keys:\n";
    int a[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // cout << "Enter the element:\n";
    int v;
    cin >> v;

    cout << linSearch(a, v, n);

    cout << "\n";
    return 0;
}
