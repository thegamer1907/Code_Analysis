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

      //int ans=(n-c[upper_bound(d+1,d+k+1)-d-1,s])*x;
      LL ans =(n - c[upper_bound(d+1,d+k+1,s)-d-1]) * x;
      for(int i=1;i<=m;i++)
      {
          if(b[i]>s)
            continue;
          ans = min(ans, (n - c[upper_bound(d+1,d+k+1,s-b[i])-d-1]) * a[i]);
      }
      cout<<ans<<endl;
}
