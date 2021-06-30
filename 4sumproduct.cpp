#include<bits/stdc++.h>
using  namespace std;
#define ll long long
#define MAXN 40002
vector<vector<int> > v;
// void find_factor
void find_factor()
{
	v.push_back({});
	v.push_back({});
	// v.push_back({});
	for (int i = 2; i <= MAXN; i++)
	{
		vector<int> res;
		for (int j = 1; j * j <= i; j++)
		{
			if ((i % j) == 0)
			{
				if (j != i / j)
				{
					res.push_back(j);
					res.push_back(i / j);
				} else res.push_back(j);
			}
		}
		sort(res.begin(), res.end());
		v.push_back(res);
	}
}
bool prime(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;

}
int find_result(int n)
{
	if (n % 4 == 0)
	{
		n = n / 4;
		n = n * n * n * n;
		return n;
	} else if (prime(n))
	{
		// cout << "1ldf\n";
		return -1;
	}
	else
	{
		if (v[n].size() <= 2) {
			// cout << v[n].size() << " ";
			return -1;
		}
		int ans = -1;
		// cout << v[n].size() << " ";
		int res = v[n][v[n].size() - 3];

		int req = n - 2 * res;
		res = res * res;
		int i = 0, j = v[n].size() - 1;
		// cout << req << " ";
		while (i <= j)
		{
			if (v[n][i] + v[n][j] == req)
			{
				ans = max(ans, res * v[n][i] * v[n][j]);
				i++;
				j--;
			} else if (v[n][j] + v[n][i] > req)
			{
				j--;
			} else i--;
		}
		return ans;
	}
}
void solve()
{
	int n;
	cin >> n;
	cout << find_result(n) << endl;
}
int main()
{
	int t;
	cin >> t;
	find_factor();
	while (t--)
		solve();
}