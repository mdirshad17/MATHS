#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		ll x=k/2;
		for(ll i=0;i<n;i++)
		{
           cin>>a[i];
		}
		bool yes=true;
		for(ll i=0;i<n;i++)
		{ if(k%2)
			{
				if(a[i]<=x)
				{
					cout<<0<<" ";
				}else cout<<1<<" ";
			}else
			{
				if(a[i]<x)
				{
					cout<<0<<" ";
				}else if(a[i]>x) 
				{cout<<1<<" ";
			   }else if(a[i]==x)
			   {
			   	if(yes)
			   	{
			   		cout<<1<<" ";
			   	}else cout<<0<<" ";

			   	yes=!yes;
			   }
			}  



		}cout<<endl;
	

	}
}