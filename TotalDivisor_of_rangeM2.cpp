#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		// l for checking how many number are divisble by i
		// this is given by floor value of [n/i];
		int l = n / i;
		ans += l;
	}
	cout << ans << endl;
}