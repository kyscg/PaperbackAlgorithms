#include <bits/stdc++.h>
using namespace std;

string fmsbf(int a[], int n)
{
    if (n == 0)
        return "0";

    int max = -1 * (numeric_limits<int>::infinity());
    int low, high;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum > max)
            {
                max = sum;
                low = i;
                high = j;
            }
        }
    }

    return (to_string(low) + " " + to_string(high) + " " + to_string(max));
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

    cout << fmsbf(a, n);

    cout << "\n";
    return 0;
}
