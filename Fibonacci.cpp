#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
#define ll long long
vector<int> Multiply(vector<vector<int>> v1, vector<vector<int> >v2)
{
	vector<2, vector<2, 0>> ans;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; j++)
		{	ans[i][j] = 0;
			for (int k = 0; k < 2; ++k)
			{
				ans[i][j] += (v1[j][k] * v2[k][j]) % m;
				ans[i][j] = (ans[i][j]) % m;
			}

		}
	}
	return ans;
}
void Power(vector<vector<int> > v, vector<vector<int>> v)
int main(int argc, char const *argv[])
{
	ll n;
	cin >> n;
	cout << fibo(n) << " ";
	return 0;
}