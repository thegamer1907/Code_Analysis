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
      for(ll i=1;i<=m;i++)
            scanf("%d",&a[i]);
      sort(a+1,a+1+m);
      for(ll i=m;i>1;i--)
            a[i]-=a[i-1];
      a[1]-=(a[1]/k)*k;
      ll ans=0,now=1,buf=1;
      while(buf<=m)
      {
            if(now+k>a[buf])
            {
                  ans++;
                  now+=k;
                  ll cnt=0;
                  while(now>a[buf])
                  {
                        now-=a[buf];
                        buf++;
                        if(buf>m)
                        {
                              break;
                        }
                        cnt++;
                  }
                  a[buf]-=cnt;
                  while(a[buf]<1)
                  {
                        a[buf]+=k;
                  }
            }
            else
            {
                  a[buf]-=k;
            }
      }
      cout<<ans<<endl;

}