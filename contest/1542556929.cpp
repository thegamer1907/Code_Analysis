#include<bits/stdc++.h>
#define up(j,k,i) for(i=j;i<k;i++)
#define down(j,k,i) for(i=j;i>k;i--)
#define pp(n) printf("%lld\n",n)
#define pps(n) printf("%lld ",n)
#define all(x) x.begin(),x.end()
#define ps(s) printf("%s",s)
#define is(n) scanf("%lld",&n)
#define ips(n) scanf("%lld",n)
#define ss(s) scanf("%s",s)
#define cool 0
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define f(i) cout<<i<<endl;
#define pll pair<lld,lld> 
#define pi acos(-1)
#ifdef G
#define dg(x) cout<<#x<<' '<<x<<endl;
#define dg2(x,y) cout<<#x<<' '<<x<<' '<<#y<<' '<<y<<endl;
#define dg3(x,y,z) cout<<#x<<' '<<x<<' '<<#y<<' '<<y<<' '<<#z<<' '<<z<<endl;
#define dg4(x,y,z,zz) cout<<#x<<' '<<x<<' '<<#y<<' '<<y<<' '<<#z<<' '<<z<<' '<<#zz<<' '<<zz<<endl;
#else
#define dg(x) ;
#define dg2(x,y) ;
#define dg3(x,y,z) ;
#define dg4(x,y,z,zz) ;
#endif
#define ds(n,m) scanf("%lld %lld",&n,&m)
#define ts(n,m,k) scanf("%lld %lld %lld",&n,&m,&k)
#define yes printf("YES\n")
#define no printf("NO\n")
typedef long double ld;
typedef long long int lld;
using namespace std;
const lld M =1e2+7;
const lld mod=1e9+7;
const lld infi =LLONG_MAX;
lld ans,k,n,x,y,m,mymax=LLONG_MIN,mymin=LLONG_MAX,b,c,z,sum;
lld p2[4],ii;
lld flag[M],cnt[M],a[M];
int main()
{
      lld i,j;
        ds(n,k);
        p2[0]=1;
        up(1,k+1,i)p2[i]=2*p2[i-1];
        up(1,n+1,i)
        {
          y=0;
          up(0,k,j)
          {
            is(x);
            y=y+p2[j]*x;
          }
          flag[y]=1;
        }
        n=0;
        up(0,p2[k],i)
        {
          if(flag[i]==1)
          {
            a[n++]=i;
          }
        }
        y=1LL<<n;
        up(1,y,i)
        {
          up(0,k,j)cnt[j]=0;
          x=0;
          up(0,n,j)
          {
            if(((1LL<<j)&(i))!=0)
            {
              x++;
              up(0,k,ii)
              {
                if((a[j]&(1LL<<ii))!=0)
                {
                  cnt[ii]++;
                }
              }
            }
          }
          lld ty=0;
          up(0,k,j)
          {
            if(2*cnt[j]>x)
            {
              dg2(j,x);
              ty=1;
            }
          }
          if(ty==0)
          {
            yes;
            return 0;
          }
        }
        no;
        return 0;
}
