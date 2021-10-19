/*
 * Name:        bubbleSort.cpp
 * Description: Implementation of the Bubble Sort algorithm
 * Author:      kyscg
 */

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				a[j] = a[j] + a[j - 1];
				a[j - 1] = a[j] - a[j - 1];
				a[j] = a[j] - a[j - 1];
			}
		}
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

	// output: sorted array
	bubbleSort(a, n);

	cout << "\n";
	return 0;
}
