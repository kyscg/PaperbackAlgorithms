#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    while(cin >> a >> b)
    {
        int copa = a, copb = b;
        long max = 0;
        if (a > b)
            swap (a, b);
        for (int i = a; i <= b; i++)
        {
            int copy = i;
            long ctr = 1;
            while(i != 1)
            {
                ctr++;
                if (i % 2 == 0)
                    i /= 2;
                else
                    i = 3 * i + 1;
            }
            if (ctr > max)
                max = ctr;
            i = copy;
        }
        cout << copa << " " << copb << " " << max << "\n";
    }

    return 0;
}
