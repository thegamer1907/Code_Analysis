/*  ---------------  Copyrighted With  -----------------


   -----   ----   -------   |      |   ------   ------     -----    -----  |     /
  |         |     |     |   |      |  |         |     |   |        |       |   /
  |         |     |------   |------|   -----    |-----     -----   |         /\
  |         |     |         |      |  |         |  \      |        |       |   \
   -----   ----   |         |      |   ------   |    \     ------   ----   |     \

*/


#include<bits/stdc++.h>
using namespace std;

/* ----------------------------- START of Template ---------------*/

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize ("-ffloat-store")  // to restrict undesirable precision
#pragma GCC optimize ("-fno-defer-pop") // to pop argument of function as soon as it returns
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
ll dx[4]={-1, 0, 0, +1};
ll dy[4]={0, -1, +1, 0};
const ll LINF = 1e18;
const ll INF = 1e9;
const ll MOD = 1000000007;

ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }

string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }


ll llsqrt(ll x){ if(x==0 || x==1) return x; ll start=1, end=x/2, ans; while(start<=end) { ll mid=(start+end)/2; if(mid*mid==x) return mid;
        else if(mid <= x/mid) ans=mid,start=mid+1; else end=mid-1; }  return ans; }

vector<ll> spf;
void sieve(ll size) { spf.resize(size+1); for(ll i=1;i<=size; ++i) spf[i]=i; for(ll i=4;i<=size; i+=2) spf[i]=2;
    for(ll i=3;i*i<=size; ++i) { if(spf[i]==i) { for(ll j=i*i; j<=size; j+=i) if(spf[j]==j) spf[j]=i; } } }

ll power(ll a,ll b,ll m){ if(b==0) return 1; if(b==1) return a%m; ll t=power(a,b/2,m); t=(t*t)%m; if(b&1)t=(t*a)%m; return t;}


ll modInverse(ll a, ll m) { return power(a, m-2, m); }

void fastscan(ll &number){ bool negative = false; register ll c; number = 0; c = getchar(); if (c=='-') { negative = true; c = getchar(); }
    for (; (c>47 && c<58); c=getchar()) number = number *10 + c - 48; if (negative)  number *= -1;   }


/* ----------------------          End Of Template --------------------------------*/


ll solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    vector<ll> f(1000010, 0);
    set<ll> s;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        f[v[i]]++;
        s.insert(v[i]);
    }
    vector<ll> ans(n, 0);
    for(ll i=0;i<n;i++)
    {
        ans[i]=s.size();
        f[v[i]]--;
        if(f[v[i]]==0)
            s.erase(s.find(v[i]));
    }
    while(m--)
    {
        ll x;
        cin>>x;
        cout<<ans[x-1]<<endl;
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
   // clock_t tStart = clock();

  /*---------------------------------------------------------------------------------------------------*/


    solve();

  /*---------------------------------------------------------------------------------------------------*/

   // printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}

