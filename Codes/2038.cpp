#include<bits/stdc++.h>
 
using namespace std;
 
typedef pair<int,int>   II;
typedef vector< II >      VII;
typedef vector<int>     VI;
typedef vector< VI > 	VVI;
typedef long long int 	ll;
 
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define ALL(a) a.begin(),a.end()
#define SET(a,b) memset(a,b,sizeof(a))
#define rep1(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) rep1(i, 0, n)
#define str(n) scanf("%s",n)
#define sc(n) scanf("%d",&n)
#define sout(n) printf("%s\n",n)
#define dout(n) printf("%d\n",n)
#define sll(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
 
ll pwr(ll base, ll p, ll mod){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}
 
ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}
//FILE *fin = freopen("in","r",stdin);
//FILE *fout = freopen("out","w",stdout);
int main() {
    ll n,k;
    sll(n);sll(k);
    ll a[n]; 
    map<ll,ll> m;
    map<ll,ll> m1;
    for(ll i=0;i<n;i++)
        sll(a[i]);
    ll ans=0;
    for(ll i=n-1;i>=0;i--){
        if(m1.find(a[i]*k)!=m1.end())
            ans+=m1[a[i]*k];
        if(m.find(a[i]*k)!=m.end())
            m1[a[i]]+=m[a[i]*k];
        m[a[i]]++;    
    }
    lldout(ans);
	// your code goes here
	return 0;
}
