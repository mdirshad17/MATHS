#include <bits/stdc++.h>
using namespace std;
vector<int> Zalgo(string s)
{
	int n = s.size();
	vector<int> z(n);
	z[0] = 0;
	int l = 0, r = 0;
	for (int i = 1; i < n; i++)
	{
		if (i > r)
		{
			l = r = i;
			while (r < n && s[r - l] == s[r])
			{
				r++;
			}
			z[i] = r - l;
			r--;
		} else
		{	int k = i - l;
			if (z[k] < r - i + 1)
			{
				z[i] = z[k];
			} else
			{	l = i;
				while (r < n && s[r - l] == s[r])
				{
					r++;
				}
				z[i] = r - l;
				r--;
			}
		}
	}
	return z;
}
int main()
{
	string s;
	cin >> s;
	int n = s.size();
	vector<int> z = Zalgo(s);
	int i;
	int mx = 0;
	int idx = n - 1;
	vector<int> v;
	for ( i = n - 1; i >= 0; i--)
	{
		if (i + z[i] == n)
		{
			if (z[i] >= mx)
			{
				mx = z[i];
				idx = i;
				v.push_back(mx);
			}

		}
	} if (idx < mx)
	{
		mx = mx - idx;
		cout << s.substr(0, mx);
	} else {
		string ans = "Just a legend";
		reverse(v.begin(), v.end());
		bool f = false;
		for (int i = 0; i < v.size(); i++)
		{
			for (int j = 0; j < n - v[i]; j++)
			{
				if (z[j] >= v[i])
				{
					ans = s.substr(0, v[i]);
					f = true;

				}
			}
			if (f)
			{
				break;
			}
		}
		cout << ans;
	}



	return 0;
}