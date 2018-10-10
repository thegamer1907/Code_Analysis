//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast,no-stack-protector")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pi acos(-1.0)
#define ll long long
#define vi vector<int>
#define mod 1000000007
#define C 0.5772156649
#define ls l,m,rt<<1
#define rs m+1,r,rt<<1|1
#define pil pair<int,ll>
#define pli pair<ll,int>
#define pii pair<int,int>
#define cd complex<double>
#define ull unsigned long long
#define base 1000000000000000000
#define fio ios::sync_with_stdio(false);cin.tie(0)

using namespace std;

const double eps=1e-6;
const int N=20+10,maxn=5000+10,inf=0x3f3f3f3f,INF=0x3f3f3f3f3f3f3f3f;

bool ok(ll x,ll n)
{
    ll ans=0,sum=0,te=n;
    while(n>0)
    {
        if(n>=x)
        {
            n-=x;
            sum+=x;
        }
        else
        {
            sum+=n;
            break;
        }
        n-=n/10;
    }
//    printf("%lld %lld\n",sum*2,te);
    return sum*2>=te;
}
int main()
{
    ll n;scanf("%lld",&n);
    ll l=0,r=n/2+1;
//    printf("%d\n",ok(1,n));
    while(l<r-1)
    {
        ll m=(l+r)>>1;
        if(ok(m,n))r=m;
        else l=m;
    }
    printf("%lld\n",r);
    return 0;
}
/********************

********************/
