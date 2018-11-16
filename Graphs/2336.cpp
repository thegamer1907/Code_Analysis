#include<bits/stdc++.h>
using namespace std;

/* ----------------------------- START of Template ---------------*/

#define ll long long
#define pb push_back
#define fs first
#define se second
#define rd(x) scanf("%lld", &x)
#define all(v) v.begin(),v.end()
#define pr(i, j) pair< i , j >
#define mp(i, j) map< i , j >
#define rep(i, a, b) for(ll i=a; i<b; ++i)
#define repe(i, a, b) for(ll i=a; i<=b; ++i)
#define jrep(i, a, b, c) for(ll i=a; i<b; i+=c)
#define jrepe(i, a, b, c) for(ll i=a;i<=b; i+=c)
#define inp(i, n, a) for(ll i=0;i<n;i++) cin>>a[i];

const ll LINF = 1e18;
const ll INF = 1e9;
const ll MOD = 1e9+7;

ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }

string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }

ll power(ll a,ll b,ll m){ if(b==0) return 1; if(b==1) return a%m; ll t=power(a,b/2,m); t=(t*t)%m; if(b&1)t=(t*a)%m; return t;}

ll llsqrt(ll x){ if(x==0 || x==1) return x; ll start=1, end=x/2, ans; while(start<=end) { ll mid=(start+end)/2; if(mid*mid==x) return mid;
        else if(mid <= x/mid) ans=mid,start=mid+1; else end=mid-1; }  return ans; }

vector<ll> spf;
void sieve(ll size) { spf.resize(size+1); for(ll i=1;i<=size; ++i) spf[i]=i; for(ll i=4;i<=size; i+=2) spf[i]=2;
    for(ll i=3;i*i<=size; ++i) { if(spf[i]==i) { for(ll j=i*i; j<=size; j+=i) if(spf[j]==j) spf[j]=i; } } }


/* ----------------------          End Of Template --------------------------------*/

ll n;
vector<ll> gp[2020];
ll vis[2020];

ll dfs(ll i, ll d)
{
    if(vis[i])
        return 0;
    ll ans=d;
    vis[i]=1;
    for(ll j=0;j<gp[i].size();j++)
    {
        if(!vis[gp[i][j]])
        {
            ans=max(ans, dfs(gp[i][j], d+1) );
        }
    }
  //  cout<<ans<<" "<<i<<endl;
    return ans;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //clock_t tStart = clock();

    /*---------------------------------------------------------------------------------------------------*/

    cin>>n;
    vector<ll> v;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        if(x==-1)
        {
            v.pb(i);
            continue;
        }
        gp[x].pb(i);
        gp[i].pb(x);
    }
    ll ans=0;
    for(ll i=0;i<v.size();i++)
    {
        ans=max(ans, dfs(v[i], 1));
    }
    cout<<ans;
    /*---------------------------------------------------------------------------------------------------*/

    //printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}
