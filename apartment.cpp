#include <bits/stdc++.h>
using namespace std;
int solve(int n ,int x)
{
	if(n<=2)
	{
		return 1;
	}
	int count=1;
	int z=(n-2);
	if(z%x==0)
	{
		count+=z/x;
	}else
	{
		count+=1+(z/x);
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		cout<<solve(n,x)<<endl;
	}
}