#include <bits/stdc++.h>
using namespace std;

string fmsl(int a[], int low, int high)
{
    int left = 0, right = 0, temp = 0, sum = a[low];
    for (int i = low; i <= high; i++)
    {
        temp += a[i];
        if (temp > sum)
        {
            sum = temp;
            right = i;
        }

        if (temp < a[i])
        {
            left = i;
            right = i;
            sum = a[i];
            temp = sum;
        }
    }

    return (to_string(left) + " " + to_string(right) + " " + to_string(sum));
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
        cout << "0\n";
        return 0;
    }

    // cout << "Enter the keys:\n";
    int a[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << fmsl(a, 0, n - 1);

    cout << "\n";
    return 0;
}
