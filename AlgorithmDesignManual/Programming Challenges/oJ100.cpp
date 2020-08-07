#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // The OnlineJudge didn't specify number of test cases
    // so I had to improvise and use this wierd method.
    int a, b;
    while(cin >> a >> b)
    {
        // creating copies because a > b in some cases.
        int copa = a, copb = b;

        long max = 0;
        if (a > b)
            swap (a, b);

        for (int i = a; i <= b; i++)
        {
            // we don't want the value of the loop counter
            // to change.
            int copy = i;

            // initializing to 1 because the next loop
            // breaks when the value of the number = 1.
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
