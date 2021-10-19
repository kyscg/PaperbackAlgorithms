/*
 * Name:        mergeSort.cpp
 * Description: Implementation of the Merge Sort algorithm
 * Author:      kyscg
 */

#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int p, int q, int r)
{
    // First array will have elements from p to q
    // Second array will have elements from q+1 to r
    int n1 = q - p + 1, n2 = r - q;
    int L[n1 + 1], R[n2 + 1];

    // Setting up the arrays for merging
    for (int i = 0; i < n1; i++)
        L[i] = a[p + i];
    for (int i = 0; i < n2; i++)
        R[i] = a[q + i + 1];

    // Sentinel value to compare the left over keys (if any)
    L[n1] = numeric_limits<int>::max();
    R[n2] = numeric_limits<int>::max();

    // Two finger pointers!
    int i = 0, j = 0;

    for (int k = p; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q + 1, r);

        merge(a, p, q, r);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //cout << "Number of keys:";
    int n;
    cin >> n;
    //cout << "Enter the keys:\n";
    int a[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> a[i];

    //MergeSort
    mergeSort(a, 0, n - 1);

    //cout << "Sorted keys:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";

    return 0;
}
