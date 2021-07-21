#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    while (cin >> n && n)
    {
        vector<int> a(n);
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int d, c;
            scanf("%d.%d", &d, &c);
            a[i] = d * 100 + c;
            total += a[i];
        }

        int upper = ceil(1.0 * total / n);
        int lower = total / n;

        int smaller = 0, larger = 0;
        for (int i = 0; i < n; i++)
            if (a[i] < lower)
                smaller += lower - a[i];
            else if (upper < a[i])
                larger += a[i] - upper;

        printf("$%d.", solution / 100);
        if (solution % 100 < 10)
            printf("0");
        printf("%d\n", solution % 100);
    }

    return 0;
}
