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
bool solve(int n)
{
	for (; n; n /= 3)
	{
		if (n % 3 == 2)
		{
			return false;
		}
	}
	return true;
}
void runcases(int T)
{

	int n;
	cin >> n;
	bool ans = solve(n);
	if (ans) {
		cout << "YES\n";
	} else cout << "NO\n";



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
