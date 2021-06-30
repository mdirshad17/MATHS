#include <bits/stdc++.h>
using namespace std;
std::vector<int> SOE(int n)
{
	std::vector<bool> v(n, true);
	v[0] = false;
	v[1] = false;
	for (int i = 2; i * i <= n; i++)
	{	if (v[i] == true)
		{
			for (int j = 2 * i; j <= n; j += i)
			{	v[j] = false;

			}
		}
	}
	vector<int> res;
	for (int i = 0; i < n; i++)
		if (v[i])
		{
			res.push_back(i);
		}
	return res;
}
int main()
{
	int t, n;
	cin >> t;
	vector<int> v = SOE(90000001);
	while (t--)
	{
		cin >> n;
		cout << v[n - 1] << endl;

	}
	return 0;
}