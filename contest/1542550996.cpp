#include <bits/stdc++.h>
using namespace std;
/***template***/
#define ll                   long long
#define dd                   double
#define scl(n)               scanf("%lld",&n)
#define sci(n)               scanf("%d",&n)
#define scd(n)               scanf("%lf",&n)
#define pi                   pair<ll,ll>
#define pb                   push_back
#define mp                   make_pair
#define uu                   first
#define vv                   second
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define FOOR(i,a,b)          for(ll i=a;i<=b;i++)
#define sorted(s)            sort(s.begin(),s.end())
#define reversed(s)          reverse(s.begin(),s.end())
#define contains(a,b)        (find((a).begin(), (a).end(), (b)) != (a).end())
#define MAXN                 200005
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  900000000000000000
ll Set(ll n,ll pos)
{
    return n=n|(1<<pos);
}
ll reset(ll n,ll pos)
{
    return n=n&~(1<<pos);
}
bool check(ll n,ll pos)
{
    return (bool)(n&(1<<pos));
}
/***template***/
int n,k,sum[20];
int main()
{
    sci(n);
    sci(k);
    for(int i=1;i<=n;i++)
    {
        int sum_now=0;
        int tp;
        for(ll j=0;j<k;j++)
        {
            sci(tp);
            sum_now+=(tp<<j);
        }
        sum[sum_now]=true;
    }
    bool flag=false;
    for(ll i=0;i<16;i++)
    {
        for(ll j=0;j<16;j++)
        {
            if((i&j)==0 && sum[i] && sum[j])
            {
                flag=true;
            }
        }
    }
    if(flag) puts("YES");
    else puts("NO");
    return 0;
}

	  		  		  	  			 	   				 				