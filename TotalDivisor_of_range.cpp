#include<bits/stdc++.h>
using namespace std;
vector<int> sieve(int n)
{
	vector<int> res(n + 10, 0);
	for (int i = 0; i < n + 10; i++)
	{
		res[i] = i;
	}
	for (int i = 2; i * i <= n + 10; i++)
	{
		if (res[i] == i)
		{
			for (int j = 2 * i; j <= n + 10; j += i)
			{
				if (res[j] == j)
				{
					res[j] = i;
				}
			}
		}
	}
	return res;
}
int main()
{
	int n;
	cin >> n;
	vector<int> res = sieve(n);
	for (int i = 1; i <= n; i++)
	{
		cout << res[i] << " ";
	} cout << endl;
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		map<int, int> m;
		int x = i;
		while (x != 1)
		{
			m[res[x]] ++;
			x = x / res[x];
		}
		int l = 1;
		for (auto x : m)
		{
			l = l * (x.second + 1);
		}
		ans += l;
	} cout << ans;

}