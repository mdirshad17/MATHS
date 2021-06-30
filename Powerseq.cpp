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
int cal(vi &v, int f, int prev)
{
	int sum = 0;
	int g = 1;
	for (int i = 0; i < v.size(); i++)
	{
		sum += abs(v[i] - g);
		g = g * f;
		if (sum > prev)
		{
			return -1;
		}
	}
	return sum;
}
void runcases(int T)
{

	int n;
	cin >> n;
	vi v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(all(v));
	if (n == 1 || n == 2)
	{
		cout << abs(v[0] - 1) << endl;
		return;
	}
	if (n >= 50)
	{
		int f = cal(v, 1, 1e18);
		cout << f << endl;
		return;
	}
	int prev = 1e18;
	int i = 1;
	int res = inf;
	while (1)
	{

		int sum = cal(v, i, prev);
		// cout << sum << endl;
		if (sum == -1)
		{
			break;
		}
		res = min(res, sum);
		if (sum > prev)
		{
			break;
		}
		prev = sum;
		i++;
	}
	cout << res << endl;




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
