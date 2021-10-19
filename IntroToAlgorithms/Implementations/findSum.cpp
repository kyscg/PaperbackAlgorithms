/*
 * Name:        findSum.cpp
 * Description: Given an array and a sum, the algorithm checks whether
 *              there are two elements such that they add up to the sum.
 * Author:      kyscg
 */

#include <bits/stdc++.h>
using namespace std;

void findSum(int a[], int n, int v)
{
    // STL sort works fine.
    sort(a, a + n);

    int l = 0, r = n - 1, ans = 0;
    while (l < r)
    {
        if (a[l] + a[r] == v)
        {
            ans = 1;
            break;
        }
        else if (a[l] + a[r] > v)
            r--;
        else
            l++;
    }

    if (ans == 0)
        cout << "Sum doesn't exist";
    else
        cout << "Sum exists";
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

    // cout << "Enter sum";
    int v;
    cin >> v;

    // output: sorted array
    findSum(a, n, v);

    cout << "\n";
    return 0;
}
