#include <bits/stdc++.h>
using namespace std;

void randomSearch(int a[], int n, int v)
{
    set<int, greater<int>> s;
    int index = -1;

    while (s.size() != n)
    {
        int rnd = (rand() % n);
        if (a[rnd] == v)
        {
            index = rnd;
            break;
        }
        s.insert(rnd);
    }

    if (index >= 0)
        cout << index;
    else
        cout << "Not found";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // cout << "Number of keys:";
    int n;
    cin >> n;

    if (n == 0)
    {
        // cout << "0\n";
        return 0;
    }

    // cout << "Enter the keys:\n";
    int a[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // cout << "Enter the element to be searched:";
    int v;
    cin >> v;

    randomSearch(a, n, v);

    cout << "\n";
    return 0;
}