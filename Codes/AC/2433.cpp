#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <vector>
#include <set>
#include <queue>
using namespace std;
/***template***/
#define ll                   int
#define dd                   double
#define scl(n)               scanf("%d",&n)
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
#define MAXN                 10000001
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  9000000000000000
#define mstt(a,b)            memset((a),(b),sizeof (a))
#define sz(x)                (ll)x.size()
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
ll power(ll x,ll y,ll p)
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
ll s2, s1, t2, t1;
ll egcd(ll a, ll b)
{
    ll temp;
    if (a%b == 0)
    {
        return s1;
    }
    temp = s2 - (a/b)*s1;
    s2 = s1;
    s1 = temp;
    temp = t2 - (a/b)*t1;
    t2 = t1;
    t1 = temp;
    return egcd(b, a%b);
}
/***template***/
ll spf[MAXN];
void sieve()
{
    spf[1] = 1;
    for (ll i=2; i<MAXN; i++)
    {
        spf[i] = i;
    }
    for (ll i=4; i<MAXN; i+=2)
    {
        spf[i] = 2;
    }
    for (ll i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (ll j=i*i; j<MAXN; j+=i)
            {
               if (spf[j]==j)
                {
                   spf[j] = i;
                }
            }
        }
    }
}
ll n,max_prime;
ll ase[MAXN];
void factorize(ll x)
{
//    cout<<x<<endl;
    set<ll>ret;
    while (x != 1)
    {
        ret.insert(spf[x]);
        x = x / spf[x];
    }
    set<ll>::iterator it;
    for(it=ret.begin();it!=ret.end();it++)
    {
//        cout<<*it<<" ";
        ase[*it]++;
        if(*it>max_prime)
        {
            max_prime=*it;
        }
    }
//    cout<<endl;
}
int main()
{
    sieve();
    scl(n);
    max_prime=-1;
    FOR(i,n)
    {
        ll x;
        scl(x);
        factorize(x);
    }
    for(ll i=1;i<=max_prime;i++)
    {
        ase[i]=(ase[i]+ase[i-1]);
    }
    ll q;
    scl(q);
    FOR(i,q)
    {
        ll l,r;
        scl(l);
        scl(r);
        if(l>max_prime)
        {
            printf("0\n");
            continue;
        }
        r=min(max_prime,r);
        printf("%d\n",ase[r]-ase[l-1]);
    }
    return 0;
}
