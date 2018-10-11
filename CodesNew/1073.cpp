#include<bits/stdc++.h>

using namespace std;

#define fRead(x)        freopen(x,"r",stdin)
#define fWrite(x)       freopen (x,"w",stdout)

#define ll              long long
#define ull             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define INF             2e16
#define PI              acos(-1.0)
#define mk              make_pair
#define pii             pair<int,int>
#define pll             pair<ll,ll>

#define sf              scanf
#define pf              printf
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define SQR(a)          ((a)*(a))
#define One(x)          __builtin_popcount(x)
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))

#define cases           int T;sf("%d",&T);for(int TC=1;TC<=T;TC++)
#define precision(n)    cout<<fixed<<setprecision(n);
#define bug()           cerr<<"**********\n";
#define printCase(x)    pf("Case %d: %d\n",TC,x)
#define SIZE(v)         (int)v.size()

#define SORT(v)         sort(v.begin(),v.end())
#define RSORT(v)        sort(v.begin(),v.end(),greater<int>())
#define REV(v)          reverse(v.begin(),v.end())
#define all(v)          v.begin(),v.end()
#define Unique(v)       v.erase(unique(v.begin(),v.end()),v.end())

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr)

vector <long long>v;
vector <long long>c;
long long n, s;

long long check(long long k)
{
    c.clear();

    for(int i=0;i<n;i++)
    {
        long long temp= v[i] + (i+1)*k;
        c.pb(temp);
    }

    SORT(c);

    long long cost=0;
    for(int i=0;i<k;i++)
        cost+=c[i];

    return cost;
}
int main()
{
    cin>>n>>s;
    v.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    long long high=n;
    long long low=0;
    long long mid;
    long long cost;

    long long mincost=INF;
    long long maxproduct=0;

    while(low<=high)
    {
        mid= low + (high-low)/2;
        cost=check(mid);
        if(cost<=s)
        {
            if(mid>maxproduct)
                maxproduct=mid,mincost=cost;
            else if(mid==maxproduct && cost<mincost)
                mincost=cost;

            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<maxproduct<<" "<<mincost<<endl;
}

