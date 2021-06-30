#include <bits/stdc++.h>
using namespace std;
int solve(int a, int b)
{
	if (__gcd(a, b) != 1)
	{
		return 0;
	}
	int m = b;
	int x = 1;
	int y = 0;
	while (a > 1)
	{
		int q = a / b;
		int t = b;
		b = a % b;
		a = t;
		t = y;
		y = x - y * q;
		x = t;
	}
	if (x < 0)
	{

		return x + m;
	}
	return x;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		cout << solve(a, b) << endl;
	}
}