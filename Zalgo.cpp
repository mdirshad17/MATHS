#include<bits/stdc++.h>
using namespace std;
vector<int> Zalgo(string s)
{
	int n = s.size();
	int l = 0, r = 0;
	std::vector<int> Z(n);
	Z[0] = 0;
	for (int i = 1; i < n; i++)
	{
		if (i > r)
		{
			l = r = i;
			while (r < n && s[r - l] == s[r])
			{
				r++;
			}
			Z[i] = r - l;
			r--;
		} else
		{
			int k = i - l;
			if (Z[k] < r - i + 1)
			{
				Z[i] = Z[k];
			} else
			{
				l = i;
				while (r < n && s[r - l] == s[r])
				{
					r++;
				}
				Z[i] = r - l;
				r--;
			}
		}
	}
	return Z;
}
int main()
{
	string s;
	cin >> s;
	vector<int> Z;
	Z = Zalgo(s);
	int maxz = 0;
	int n = s.size();
	for (int i = 0; i < Z.size(); ++i)
	{
		if (i + Z[i] == n)
		{
			maxz = max(maxz, Z[i]);
		}
	}
	cout << maxz;

}