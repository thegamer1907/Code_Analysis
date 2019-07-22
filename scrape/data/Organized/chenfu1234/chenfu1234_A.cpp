#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <set>
#include <queue>
#include <stack>
#include <map>
#define me(a,b) memset(a,b,sizeof(a))
#define INF 0x3f3f3f3f
#define file freopen("in.txt","r",stdin)
const int mod=1e9+7;
typedef long long ll;
using namespace std;
const int N=1e5+10;

ll n,m,k;
ll a[N];

int main()
{
      //file;
      cin>>n>>m>>k;
      for(int i=1;i<=m;i++)
            scanf("%I64d",&a[i]);
      sort(a+1,a+1+m);
      for(int i=m;i>1;i--)
            a[i]-=a[i-1];
      a[1]-=(a[1]/k)*k;
      if(a[1]==0)
            a[1]=k;
      ll ans=0,now,buf=1;
      while(buf<=m)
      {
            if(k>=a[buf])
            {
                  ans++;
                  now=k;
                  ll cnt=0;
                  while(now>=a[buf])
                  {
                        now-=a[buf];
                        buf++;
                        if(buf>m)
                        {
                              cout<<ans<<endl;
                              return 0;
                        }
                        cnt++;
                  }
                  a[buf]=a[buf]-cnt-now;
                  while(a[buf]<1)
                  {
                        a[buf]+=k;
                  }
            }
            else
            {
                  a[buf]-=(a[buf]/k)*k;
                  if(a[buf]==0)
                        a[buf]=k;
            }
      }
      cout<<ans<<endl;

}