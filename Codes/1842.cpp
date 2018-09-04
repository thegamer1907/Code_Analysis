#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pi acos(-1.0)
#define ll long long
#define mod 1000000007
#define C 0.5772156649
#define ls l,m,rt<<1
#define rs m+1,r,rt<<1|1
#define pil pair<int,ll>
#define pii pair<int,int>
#define ull unsigned long long
#define base 1000000000000000000
#define fio ios::sync_with_stdio(false);cin.tie(0)

using namespace std;

const double g=10.0,eps=1e-12;
const int N=500000+10,maxn=400000+10,inf=0x3f3f3f3f;

ll n,m,k;
inline ll solve(ll bs,ll x)
{
    register ll l=0,r=m+1;
    while(l<r-1)
    {
        register ll mid=(l+r)>>1;
        if(bs*mid<=x)l=mid;
        else r=mid;
    }
    return l;
}
inline ll getnum(ll x)
{
    register ll ans=0;
    for(register ll i=1;i<=n;i++)
    {
        ans+=min(x/i,m);
        //solve(i,x);
    }
    return ans;
}
int main()
{
//    cout<<log(250000000000ll)*500000*log(500000);
    scanf("%lld%lld%lld",&n,&m,&k);
//    cout<<getnum(4);
    register ll l=0,r=n*m+1;
    while(l<r-1)
    {
        register ll mid=(l+r)>>1;
//        cout<<l<<" "<<mid<<" "<<r<<" "<<getnum(mid)<<endl;
        if(getnum(mid)<k)l=mid;
        else r=mid;
    }
    printf("%lld\n",r);
    return 0;
}
/********************

********************/
