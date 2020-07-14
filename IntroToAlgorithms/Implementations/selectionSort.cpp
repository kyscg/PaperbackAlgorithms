#include <bits/stdc++.h>
using namespace std;


void selectionSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int key = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[key])
				key = j;
		int temp = a[key];
		a[key] = a[i];
		a[i] = temp;
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
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

	// output: Sorted array via selection sort.
	selectionSort(a, n);

    cout << "\n";
    return 0;
}
