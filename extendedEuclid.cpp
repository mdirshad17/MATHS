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
	int x1 , y1;
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
		int x, y;
		solve(a, b, x, y);
		cout << x << " " << y << endl;
	}
}