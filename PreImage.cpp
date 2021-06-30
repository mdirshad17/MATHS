// Leetcode



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
const int maxn = 1e5;
void runcases(int T)
{

	int n;
	cin >> n;
	vpi vp(n);
	for (int i = 1; i <= n; i++)
	{
		vp[i - 1].ff = i;
		// cout << i << " ";
	} cout << endl;
	for (int i = 1; i <= n; i++)
	{
		int l = 0;
		for (int j = 5; j <= 625 * 625; j *= 5)
		{
			l += (i / j);
		}
		vp[i - 1].ss = l;
		// cout << l << " ";
	}
	for (auto x : vp)
	{
		cout << x.ff << " " << x.ss << endl;
	}



	//cout<<"Case #"<<T<<": ";
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
