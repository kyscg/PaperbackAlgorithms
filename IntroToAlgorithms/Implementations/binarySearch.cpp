#include <bits/stdc++.h>
using namespace std;


void binarySearch(int a[], int v, int n)
{
	int start = 0, end = n - 1, mid, index = -1;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (a[mid] == v)
		{
			index = mid;
			break;
		}
		else if (a[mid] < v)
			start = mid + 1;
		else
			end = mid - 1;
	}

	if (index < 0)
		cout << "NIL";
	else
		cout << index;
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

	// cout << "Enter the element to be searched:";
	int v;
	cin >> v;

	// output: Index or "NIL"
	binarySearch(a, v, n);

    cout << "\n";
    return 0;
}
