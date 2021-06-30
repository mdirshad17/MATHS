#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m;
		cin >> m;
		int inv[m];
		inv[1] = 1;
		for (int i = 2; i < m; i++)
		{
			inv[i] = m - ((m / i) * inv[m % i] % m);
		} cout << "Modular inverse\n";
		for (int i = 1; i < m; ++i)
		{
			cout << inv[i] << endl;
		}
		return 0;
	}
}