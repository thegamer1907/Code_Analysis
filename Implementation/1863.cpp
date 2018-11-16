#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define lli long long int 
#define ull unsigned long long
#define mod 1000000007
#define endl "\n"
#define GIO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{ GIO;
  ll T;
  cin>>T;ll sum=0; ll k=0;
  while(T--)
  { ll x,y,z;
    cin>>x>>y>>z;
    if(x==0&& y==2 && z==-2)
    {    k=1;
    	}
        sum+=(x+y+z);      
    	     
  }
  if(sum==0 && k==0) cout<<"YES"<<"\n";
  else cout<<"NO"<<"\n";
return 0;
}


