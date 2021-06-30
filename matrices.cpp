#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		bool yes = false;
		while (n--)
		{
			int a, b, c, d;
			cin >> a >> b >> c >> d;
			if (c == b)
			{
				yes = true;
			}

		}
		if (m % 2 || yes == false)
		{
			cout << "NO\n";
		} else if (yes)
		{
			cout << "YES\n";
		}
	}
	return 0;
}