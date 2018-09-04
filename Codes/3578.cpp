#include<bits/stdc++.h>
#define int long long
typedef long long ll;
typedef long long LL;
typedef unsigned long long ull;
typedef unsigned long long uLL;
using namespace std;
const int maxn=2e5+10;
LL a[maxn];
LL b[maxn];
LL c[maxn];
LL d[maxn];
int32_t main()
{
      int n,m,k,x,s; cin>>n>>m>>k>>x>>s;
      for(int i=1;i<=m;i++) cin>>a[i];
      for(int i=1;i<=m;i++) cin>>b[i];
      for(int i=1;i<=k;i++) cin>>c[i];
      for(int i=1;i<=k;i++) cin>>d[i];
     //LL ans =(n - c[upper_bound(d+1,d+k+1,s)-d-1]) * x;
      int ans=n*x;
      a[0]=x; b[0]=0;
      for(int i=0;i<=m;i++)
      {
          if(b[i]>s)
            continue;
          else
          {   // jia she zai li mian
              int l=1;
              int r=k;  // zuo bian chu cun da an;
              while(1)
              {
                  if(l==r) break;
                  if(l+1==r) break;

                  int mid=(l+r)/2;
                  if(d[mid]>s-b[i])
                  {
                      r=mid;
                  }
                  else if(d[mid]<=s-b[i])
                  {
                      l=mid;
                  }

              }
             // cout<<d[l]<<"--------"<<d[r]<<endl;
              //cout<<d[l]<<"--------"<<d[k]<<endl;

              if(d[k]<=s-b[i])
              {
                  if(c[k]>=n)
                  {
                      ans=min(ans,(LL)0);
                  }
                  else
                  {
                      ans=min(ans,(n-c[k])*a[i]);
                  }
              }
              else if(d[l]<=s-b[i])
              {
                  if(c[l]>=n) ans=0;
                  else
                  {
                       ans=min(ans,(n-c[l])*a[i]);
                  }
              }

              ans=min(ans,n*a[i]);
          }
          //ans = min(ans, (n - c[upper_bound(d+1,d+k+1,s-b[i])-d-1]) * a[i]);
      }
      cout<<ans<<endl;
}
