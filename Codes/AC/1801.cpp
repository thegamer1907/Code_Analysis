#include <bits/stdc++.h>
using namespace std;
/***template***/
#define ll                   long long
#define dd                   double
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define pi                   pair<ll,ll>
#define pb                   push_back
#define mp                   make_pair
#define uu                   first
#define vv                   second
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define FOOR(i,a,b)          for(ll i=a;i<=b;i++)
#define LOP(i,a,b)           for(ll i=a;i<b;i++)
#define sorted(s)            sort(s.begin(),s.end())
#define sortedd(s)           sort(s.begin(),s.end(),cmp)
#define reversed(s)          reverse(s.begin(),s.end())
#define contains(a,b)        (find((a).begin(), (a).end(), (b)) != (a).end())
#define MAXN                 210
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  1e18
#define mstt(a,b)            memset((a),(b),sizeof (a))
#define sz(x)                (ll)x.size()
/***template***/
ll n,m,k;
ll ans;
bool can(ll mid)
{
    ll mid_ase=0;
    ll cnt2=0;
    FOR(i,n)
    {
        if(mid%i==0)
        {
            ll ans=((mid/i)-1LL);
            ans=min(ans,m);
            cnt2+=ans;
        }
        else
        {
            ans=(mid/i);
            ans=min(ans,m);
            cnt2+=ans;
        }
    }
    if(cnt2<k)
    {
        return 1;
    }
    return 0;

}
int main()
{
    scl(n);
    scl(m);
    scl(k);
    ll low=0;
    ll high=inf;
    ll mid;
    ll ans=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(can(mid))
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("%lld",ans);
    return 0;
}
