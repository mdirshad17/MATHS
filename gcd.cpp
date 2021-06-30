#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
int main()
{
	int x, y;
	cin >> x >> y;
	cout << gcd(x, y) << endl;
}