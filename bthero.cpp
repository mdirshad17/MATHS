#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		ll a[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		int count = 0;
		for (ll i = 1; i < n; i++)
		{
			ll x = (k - a[i]) / a[0];
			count += x;
		}
		cout << count << endl;
	}
}