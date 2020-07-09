#include <bits/stdc++.h>
using namespace std;


int merge(int a[], int p, int q, int r)
{
    int ctr = 0;

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
            // The following line is the only addition
            // wrt MergeSort, we count the number of
            // inversions by comparing between left and
            // right halves of the array.
            ctr += n1 - i;
            a[k] = R[j];
            j++;
        }
    }
    return ctr;
}

int mergeSort(int a[], int p, int r)
{
    int ctr = 0;
    if (p < r)
    {
        int q = (p + r) / 2;
        ctr += mergeSort(a, p, q);
        ctr += mergeSort(a, q + 1, r);

        ctr += merge(a, p, q, r);
    }
    return ctr;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //cout << "Number of keys:";
    int n, ans = 0;
    cin >> n;
    //cout << "Enter the keys:\n";
    int a[n] = {0};
    for(int i = 0; i < n; i++)
        cin >> a[i];

    //MergeSort
    ans = mergeSort(a, 0, n - 1);

    //cout << "Sorted keys:\n";
    cout << ans;

    cout << "\n";
    return 0;
}

