#include <bits/stdc++.h>
using namespace std;
#define MAXN 1e5
int sieve[100006];
void sievecompute()
{

	for (int i = 2; i <= MAXN; i++)
	{
		if (sieve[i] != 0)
			continue;

		for (int j = i; j <= MAXN; j += i)
		{
			sieve[j] = i;
		}
	}

}
void solve(int n)
{
	int val = n;
	map<int, int> m;
	while (val != 1)
	{
		val = val / sieve[val];
		m[sieve[val]]++;
	}
	cout << "Prime Factors:" << m.size() << endl;
	int total = 1;
	int oddcount = 1;
	for (auto x : m)
	{
		cout << x.first << " " << x.second << endl;
		total = total * (x.second + 1);
		if (x.second != 2)
		{
			oddcount *= (x.second + 1);
		}
	}
	cout << "total Factors:" << " " << total << endl;
	cout << "total Odd Factors:" << " " << oddcount << endl;
	cout << "total  Even Factors:" << " " << (total - oddcount) << endl;



}
int main()
{
	int n;
	cin >> n;
	sievecompute();
	solve(n);
}