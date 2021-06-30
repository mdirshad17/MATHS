#include <bits/stdc++.h>
using namespace std;
int TotalDiv(int n) {
	int res = 1;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			int count = 0;
			while (n % i == 0)
			{
				count++;
				n = n / i;
			}
			res = res * (count + 1);
		}
	}
	if (n > 1)
	{
		res = res * 2;
	}
	return res;
}
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << TotalDiv(n) << endl;
	}
}