#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define int long long int
typedef pair<int,int> pii;

void solve(int T)
{

  int n;
  cin>> n;
  double l=1;
  double r=n;
  for(int i=0;i<=20;i++)
  {
    double m=(l+r)/2;
    if(m*m<=n)
    {
    	l=m;
    }else
    {
    	r=m;
    }
  }
  
   cout<<l<<endl;
    // int* arr=new int[n];
  // for(int i=0;i<n;i++){
  //   cin>>arr[i];
  // }
  //
  //
  // delete[] arr;

  //cout<<"Case #"<<T<<": ";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int T = 1;
    cin >> T;
    for (int t=1;t<=T; t++) {
        solve(t);
    }

    return 0;
}
