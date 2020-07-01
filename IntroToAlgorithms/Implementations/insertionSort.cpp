#include <bits/stdc++.h>
using namespace std;

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

    //InsertionSort
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j > -1 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    //cout << "Sorted keys:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
