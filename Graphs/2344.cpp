#include <bits/stdc++.h>
using namespace std;
#if DEBUG && !ONLINE_JUDGE
    #include "/home/chaman/Desktop/cpp/debug.h"
#else
    #define debug(args...)
    #define DBG(x...)
#endif
typedef     long long int                        ll;
typedef     long double                          ld;
typedef     vector<ll>                           vi;
typedef     pair<ll,ll>                          pii;
typedef     vector<pii>                          vpi;
typedef     vector<vi>                           vvi;
typedef     map<ll,ll>                           mii;
typedef     map<char,ll>                         mci;
typedef     priority_queue<ll>                   pqi;
typedef     priority_queue<pii>                  pqii;
typedef     priority_queue<ll,vi,greater<ll>>    pqmini;
typedef     priority_queue<pii,vpi,greater<pii>> pqminpi;

#define     fi              first
#define     se              second
#define     sz(a)           (ll)((a).size())
#define     rep(i,n)        for(ll i=0;i<n;i++)
#define     repA(i,a,n)     for(auto i=a;i<=n;i++)
#define     repD(i, a, n)   for(auto i = a; i >= (n); --i)
#define     trav(a, x)      for(auto& a : x)
#define     all(x)          x.begin(), x.end()
#define     fill(a)         memset(a, 0, sizeof (a))
#define     pb              push_back
#define     MOD             1000000007
#define     PI              3.14159265359
#define     EULER           2.7182818284

//////////////////////////////////////////////////////////////////////
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(20);
    ll n;cin>>n;
    vi start,a(n+1,0);
    ll b;
    vi man(n+1,0);
    repA(i,1,n){
        cin>>b;
        if(b!=-1)man[b]=1;
        a[i]=b;
    }
    repA(i,1,n){
        if(man[i]==0)start.pb(i);
    }
    ll len=0,lmax=-1;
    DBG(start);
    for(auto i:start){
        ll curr=i;
        len=0;
        while(a[curr]!=-1){
            len++;
            curr=a[curr];
        }
        lmax=max(lmax,len);
    }
    cout<<lmax+1<<endl;




    debug("\nRuntime = " + to_string((ll)clock()/CLOCKS_PER_SEC));
    return 0;
}