#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007
ll power(ll b, ll e)
{
	if (b == 1 || e == 0)
	{
		return 1;
	}
	if (e == 1)
	{
		return b % m;
	}
	if (e & 1)
	{
		return (b * (power(b, e / 2) % m) * (power(b, e / 2) % m)) % m;
	}
	return ((power(b, e / 2) % m) * (power(b, e / 2) % m) % m);
}

// ll power(ll b,ll e)
// {  ll ans=1;
// 	while(e)
// 	{
// 		if(e&1)
// 		{
//           ans=(ans*b)%m;
//

// 		}
// 		b=(b*b)%m;
//
// 		e=e/2;
// 	}
// 	return ans%m;
// }

int main()
{
	int t;
	cin >> t;
	ll b, e;
	while (t--)
	{
		cin >> b >> e;
		cout << power(b, e) << endl;
	}
}