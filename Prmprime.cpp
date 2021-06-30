#include <bits/stdc++.h>
using namespace std;
vector<int> get()
{
 vector<int> v(1000001,1);
 v[0]=0;
 v[1]=0;
 for (int i = 2; i*i <=1000000; ++i)
 {    if(v[i]==1){
 	  for(int j=i*i;j<=1000000;j+=i)
 	  {
       v[j]=0;
 	  }
 	}
 }
 return v;
}
int main()
{
	int t,l,r;
	cin>>t;
	std::vector<int> v=get();
	vector<int> c(1000001,0);
	int cnt=0;
	for(int i=1;i<1000001;i++)
	{
       if(v[i]==1)
       {
       	cnt++;
       }
       if(v[cnt]==1)
       {
       	c[i]=1;
       }
       
	}
	for (int i = 1; i < c.size(); ++i)
	{
		c[i]+=c[i-1];
	}

	while(t--)
	{
		cin>>l>>r;
		int ans=c[r]-c[l-1];
		cout<<ans<<endl;

	}
	return 0;
}