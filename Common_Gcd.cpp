#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define int long long int
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vpi vector<pair<int,int>>
#define pii pair<int,int>
#define pb push_back
#define inf 1e18
#define ff first
#define ss  second
#define deb(x) cout<<#x<<" "<<x<<endl;
#define all(x) x.begin(),x.end()
#define endl "\n"
const int maxn = 1e6 + 1;
int facts[maxn];
void pc()
{
	vb sv(maxn, true);
	sv[0] = false;
	sv[1] = false;
	for (int i = 2; i < maxn; i++)
	{
		if (sv[i]) {
			facts[i] = i;
			for (int j = 2 * i; j < maxn; j += i)
			{
				facts[j] = i;
				sv[j] = false;
			}
		}
	}
}
void runcases(int T)
{

	int n;
	cin >> n;
	vi v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	pc();
	sort(all(v));



}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T = 1;
	//cin >> T;
	for (int t = 1; t <= T; t++) {
		runcases(t);
	}

	return 0;
}
