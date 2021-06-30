#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int count = INT_MAX;
		for (int i = 1; i <= sqrt(n); i++)
		{
			int x = i - 1;
			int z;
			if ((n - i) % i == 0)
			{
				z = (n - i) / i;
			} else
			{
				z = 1;
				z += (n - i) / i;
			}
			x = x + z;
			count = min(count, x);
		}
		cout << count << endl;
	}
}