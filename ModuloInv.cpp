#include <bits/stdc++.h>
using namespace std;
int solve(int n, int e, int m)
{
	int res = 1;
	while (e)
	{
		if (e & 1)
		{
			res = res * n;
			res = res % m;
		}
		e = e / 2;
		n = n * n;
		n = n % m;
	}
	return res % m;
}
int main()
{
	int t, n, m;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		cout << solve(n, m - 2, m) << endl;
	}
}