#include <bits/stdc++.h>
#define ll int
#define MOD 1000000007
#define MAX 99999999
#define MIN -999999999
#define Mask ((1<<16)-1)
#define memz(x) memset(x, 0, sizeof x)
#define memn(x) memset(x, -1, sizeof x)
#define pb(a) push_back(a)
#define nai treering::npos
#define in1(a) scanf("%d", &a)
#define in2(a,b) scanf("%d%d", &a, &b)
#define in4(a,b,c,d) scanf("%lld%lld%lld%lld", &a, &b,&c,&d)
#define IO ios_base::sync_with_stdio(false)
#define tc(i) printf("Case %d:\n", ++i)
#define filer    freopen("input.txt", "r", stdin)
#define filew    freopen("out.txt", "w", stdout)
using namespace std;
ll n, q, a[1000010], tree[10000010],cum[10000010],mp[10000010], N=10000000;
bool isprime[10000010];
vector<ll>pf[1000005];

void seive()
{
    for(ll i=2; i<=10000000; i++)
    {
        if(isprime[i]==0)
        {
            for(ll j=i; j<=10000000; j+=i)
            {
                isprime[j]=1;
                if(mp[j]!=0)
                    pf[mp[j]].pb(i);
            }
        }
    }
}

void dc()
{
    sort(a, a+n);
    mp[a[0]]=1;
    ll k=2;
    for(int i=1; i<n; i++)
        if(a[i]!=a[i-1])
            mp[a[i]]=k++;
}
int main()
{
    in1(n);
    for(int i=0; i<n; i++)
    {
        in1(a[i]);
    }
    dc();
    seive();
    for(int i=0; i<n; i++)
    {
        ll sz=pf[mp[a[i]]].size();
        for(int j=0; j<sz; j++)
        {
            tree[pf[mp[a[i]]][j]]++;
        }
    }
    cum[1]=tree[1];
    for(int i=2;i<=10000000;i++)
        cum[i]=tree[i]+cum[i-1];
    in1(q);
    while(q--)
    {
        ll L, R;
        in2(L, R);
        if(R>N)
            R=N;
        if(L>N)
            L=N;
        printf("%d\n", cum[R]-cum[L-1]);
    }
    return 0;
}
