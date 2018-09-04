#include <bits/stdc++.h>
using namespace std;
/***template***/
#define ll                   long long
#define ___                  ios_base::sync_with_stdio(false);cin.tie(NULL);
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
#define MAXN                 100005
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  1e18
#define INF                  (1LL<<62)
#define mstt(a,b)            memset((a),(b),sizeof (a))
#define sz(x)                (ll)x.size()
#define uniquee(x)            x.erase(unique(x.begin(), x.end()),x.end())
#define print_vector(v)       for(ll i=0;i<(v.size());i++)cout<<v[i]<<" ";
/****only for priority queue******/
/**struct node
{
    ll nod,d;
    node(ll a,ll b)
    {
        nod=a;
        d=b;
    }
    bool operator<(const node &p)const
    {
        return p.d<d;
    }
};**/

ll Set(ll n,ll pos)
{
    return n=n|(1LL<<pos);
}
ll reset(ll n,ll pos)
{
    return n=n&~(1LL<<pos);
}
bool check(ll n,ll pos)
{
    return (bool)(n&(1LL<<pos));
}
ll mul(ll a,ll b)
{
    ll c;
    c = (a%mod * b%mod)%mod;
    return c;
}
ll add(ll a,ll b)
{
    ll c;
    c = (a%mod + b%mod)%mod;
    return c;
}
ll sub(ll a,ll b)
{
    ll c;
    c = ((a%mod - b%mod)%mod + mod)%mod;
    return c;
}
ll power(ll x,ll y)
{
    ll res = 1;
    x = x;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x);
        y = y>>1;
        x = (x*x);
    }
    return res;
}
long long exgcd(long long x, long long y, long long &a, long long &b)
{
    // ax + by = gcd(x,y)
    int flag = 0;
    long long t, la = 1, lb = 0, ra = 0, rb = 1;
    while(x%y)
    {
        if(flag == 0)
            la -= x/y*ra, lb -= x/y*rb;
        else
            ra -= x/y*la, rb -= x/y*lb;
        t = x, x = y, y = t%y;
        flag = 1 - flag;
    }
    if(flag == 0)
        a = ra, b = rb;
    else
        a = la, b = lb;
    return y;
}
/***template***/

ll n,s;
vector<ll>ans;
ll arr[100005];
int main()
{
    scl(n);
    scl(s);
    FOR(i,n)
    {
        scl(arr[i]);
    }

    ll low=0;
    ll high=n;
    ll mid;
    ll ans1=-1;
    ll ans2=-1;
    while(low<=high)
    {
        mid=(low+high)/2;

        ll sum=0;
        ans.clear();
        FOR(i,n)
        {
            ans.pb(i*mid+arr[i]);
        }
        sorted(ans);
        LOOP(i,mid)
        {
            sum+=ans[i];
        }
        if(sum<=s)
        {
            ans1=mid;
            ans2=sum;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}

