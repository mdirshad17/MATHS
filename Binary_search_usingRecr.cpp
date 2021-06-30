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
#define mii map<int,int>
#define all(x) x.begin(),x.end()
#define endl "\n"
vi v;
int binary_search(int l, int r, int val)
{
	if (l > r)
	{
		return -1;
	}
	int m = (l + r) / 2;
	if (v[m] == val)
	{
		return m;
	}
	if (v[m] > val)
	{
		return binary_search(l, m - 1, val);
	}
	return  binary_search(m + 1, r, val);

}
void runcases(int T)
{

	int n;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int x;
	cin >> x;
	sort(all(v));
	int l = 0, r = n - 1;
	cout << binary_search(l, r, x) << endl;



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
