#include <bits/stdc++.h>
using namespace std;
// std::vector<bool> SOE(int n)
// {
// 	vector<bool> v(n,true);
// 	v[0]=false;
// 	v[1]=false;
// 	for(int i=2;i*i<=n;i++)
// 	{
// 		if(v[i])
// 		{
// 			for(int j=2*i;j<=n;j+=i)
// 			{
// 				v[j]=false;
// 			}
// 		}
// 	}
// 	return v;
// }
bool isPrime(int n)
{
	if(n==1)
	{
		return false;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return false;
	}
return true;
}
int main()
{
	int t;
	cin>>t;
	int l,r;
	while(t--)
	{
		cin>>l>>r;
		for(int i=l;i<=r;i++)
		{
		 if(isPrime(i))
		 {
		 	cout<<i<<" ";
		 }
		}cout<<endl;
	}
}