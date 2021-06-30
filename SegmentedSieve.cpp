#include <bits/stdc++.h>
using namespace std;
void SegmentedSieve(int l,int r)
{
	int x=sqrt(r);
	vector<bool> v(x+1,true);
	v[0]=false;
	v[1]=false;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(v[i])
		   for(int j=i*i;j<=x;j+=i)
			 v[j]=false;
		
	}
	vector<bool> v1(r-l+1,true);

	for(int i=2;i<=x;i++)
	{
		if(v[i]==true)
		{
			for(int j=l;j<=r;j++)
			{
				if(j%i==0)
				{
					v1[j-l]=false;
				}
			}
		}
	}
	for (int i = l; i <=r; ++i)
	{
	if(v1[i-l])
	{
		cout<<i<<" ";
	}
	}
	
	
}
int main()
{
	int t;
	cin>>t;
	int l,r;
	while(t--)
	{
		cin>>l>>r;
        SegmentedSieve(l,r);
        cout<<endl;

	}
	return 0;
}