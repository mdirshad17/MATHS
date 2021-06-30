#include <bits/stdc++.h>
using namespace std;
int solve(int a, int b, int &x, int &y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	int x1, y1;
	int d = solve(b, a % b, x1, y1);
	x = y1;
	y = x1 - y1 * (a / b);
	return d;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int z = __gcd(a, b);
		a = a / z;
		b = b / z;
		c = c / z;

		int x, y;
		solve(abs(a), abs(b), x, y);
		if (a < 0)
		{
			x = -x;
		}
		if (b < 0)
		{
			y = -y;
		}
		x = c * x;
		y = c * y;
		cout << x << " " << y << endl;
	}

}