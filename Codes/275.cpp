#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n ,m,i,j,f=0,x,l,r,z;
    cin>>n;
    ll a[n+1];
   
    cin>>a[1];
    a[0]=0;
    for(i=2;i<=n;i++)
    {
      cin>>a[i];
      a[i]+=a[i-1];
    }
   //  for(i=0;i<=n;i++)
   //   cout<<a[i]<<" ";
   // cout<<"\n";
    cin>>m;
    while(m--)
    {
      cin>>x;
      l=0;
      r=n;
      while(l<=r)
      {
        z=(l+r)/2;

        if(a[z]>=x)
          r=z-1;
        else
          l=z+1;
      }

      cout<<l<<"\n";
    }
return 0;

 
}
 