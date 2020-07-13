#include <bits/stdc++.h>
using namespace std;


string addBin(int a[], int b[], int n)
{
	int c[n + 1] = {0}, next = 0;

	for (int i = n - 1; i >= 0; i--)
	{
		next = a[i] + b[i] + c[i + 1];
		c[i] = next / 2;
		c[i + 1] = next % 2;
		// cout << i << ": " << next << " " << c[i] << " " << c[i + 1] << "\n";
	}

	string ans = "";
	for (int i = 0; i < n + 1; i++)
		ans += to_string(c[i]) + " ";

	return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // cout << "Number of bits:";
    int n;
    cin >> n;

    // cout << "Enter the binary numbers:\n";
    int a[n] = {0}, b[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
		cin >> b[i];

	// output: Binary representation of c = a + b
	cout << addBin(a, b, n);

    cout << "\n";
    return 0;
}
