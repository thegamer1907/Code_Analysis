#include <bits/stdc++.h>
 
using namespace std;
 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ll long long int
#define FF first
#define SS second
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define plld(x) printf("%lld\n",x)
#define pss printf
#define MOD 1000000007
#define INF 1e18
#define eps 0.00001
#define endl '\n'
#define debug(n1) cout<<n1<<endl
ll n,k;
set<ll>s;
vector<ll>a; 
bool check(ll x)
{
    if(x==0)return 0;
    ll d[20]={0};
    ll in=0;
    while(x)
    {
        d[in++]=(x&1);
        x>>=1;
    }

    ll cnt[4]={0},cn=0;
    for(int i=0;i<in;i++)
        cn+=d[i];
    ll d1[4]={0};
    for(int i=0;i<in;i++)
    {
        ll in1=0;
        if(d[i])
        {
            ll x=a[i];
            while(x)
            {
                d1[in1++]+=(x&1);
                x>>=1;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        if(2*d1[i]>cn)
            return 0;
    }
    return 1;
}
bool recur(ll i,ll x)
{
    if(i>=a.size())
        return check(x);
    return (recur(i+1,x)|recur(i+1,x|(1<<i)));
}
int main() {
slld(n);slld(k);
for(int i=1;i<=n;i++)
{
    ll x=0,y;
    for(int i=0;i<k;i++)
    {
        slld(y);
        x=x+y*(1ll<<i);
    }
    s.insert(x);
}
for(auto j:s)
    a.pb(j);
if(recur(0,0))
    pss("YES\n");
else
    pss("NO\n");
    return 0;
           } 