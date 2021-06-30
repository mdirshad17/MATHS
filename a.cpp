#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define hM 9999999900000001

#define   int long long int
#define   vi vector<int>
#define   vvi vector<vi>
#define   vpi vector<pair<int,int>>
#define   pii pair<int,int>
#define   pb push_back
#define   inf 1e18
#define   ff first
#define   ss  second
#define   deb(x) cout<<#x<<" "<<x<<endl;
#define   all(x) x.begin(),x.end()
#define printVec(vec) {for(auto &x : vec) cout << x <<" "; cout << endl; }
#define   endl "\n"
const int maxn = 1e5;


//  int BIT[maxn];
// void add(int x){while(x<N)BIT[x]++,x+=x&-x;}
// int sum(int x){return x?BIT[x]+sum(x-(x&-x)):0;}



void runcases(int T)
{

	string s;
	cin >> s;
	int n = s.size();
	if (n & 1 || s[0] == ')' || s[n - 1] == '(')
	{
		cout << "NO\n";
		return;
	}
	stack<char> st;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '(')
		{
			st.push('(');
		} else
		{
			if (st.size())
			{
				st.pop();
			} else
			{
				st.push(s[i]);
			}
		}
	}



	//cout<<"Case #"<<T<<": ";
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	// freopen("inputf.txt", "r", stdin);
	// freopen("outputf.txt", "w", stdout);
#endif
	int T = 1;
	// cin >> T;
	for (int t = 1; t <= T; t++) {
		runcases(t);
	}

	return 0;
}
