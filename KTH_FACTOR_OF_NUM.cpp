#include<bits/stdc++.h>
using namespace std ;
void solve()
{
	int n, k;
	cin >> n >> k;
	int i = 1;
	// Iterating over the sqrt(N)
	// Trying to get the kth factor
	for (; i * i <= n; i++)
	{
		if ((n % i) == 0)
		{
			if ((--k) == 0)
			{
				cout << i << endl;
				return;
			}
		}
	}
	// iterating again over the sqrt(N)
	// to get the greater roots than sqrt(N)
	for (int j = i - 1; j >= 1; j--)
	{
		if (j * j == n)
			continue;
		if ((n % j) == 0)
		{
			if ((--k) == 0)
			{
				cout << (n / j) << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}