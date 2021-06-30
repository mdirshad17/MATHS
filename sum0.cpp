#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}
 ll psum=0;
 ll count=0;
 set<ll> s;
 s.insert(0);
 for (ll i = 0; i < n; ++i)
 {
 	psum=psum+a[i];
 	if(s.find(psum)!=s.end())
 	{
 		count++;
        psum=a[i];
        s.clear();
        s.insert(0);
        s.insert(a[i]);
 	}
 	s.insert(psum);
 
  } 
cout<<count<<endl;


}