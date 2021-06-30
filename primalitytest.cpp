#include <bits/stdc++.h>
using namespace std;
bool solve(int n)
{   int res=n;
	if(n==1)
	{
		return false;
	}
	for (int i = 2; i <=sqrt(n); ++i)
	{
		if(res%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		cout<<solve(n)<<endl;
	}
}