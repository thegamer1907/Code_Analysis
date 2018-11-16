/* --------------- Copyrighted With -----------------
CANCER KA MAREEZ
_________________________
| LIVE FREE OR DIE |
| 327 2153 |
| New |
|_______HAMPSHIRE_______|
*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// #include <boost/multiprecision/cpp_int.hpp>
// namespace mp = boost::multiprecision;
// tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ss;
/* -------Template starts here ---------------*/
typedef vector<ll> vi;
typedef pair<ll,ll> ii;
typedef vector< ii > vii;
typedef vector< vii > vvii;
#define pb push_back
#define mp make_pair
#define s second
#define f first
#define all(v) v.begin(),v.end()
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define nl "\n"
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
const ll LINF = 1e18;
const ll INF = 1e9;
const ll MOD = 1000000007;
const ll MAX = 100005;
#ifndef LOCAL
#pragma GCC optimize("O3")
#endif
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("-fno-defer-pop")
#define INF 0x3f3f3f3f

#define FOR(i,x,y) for(int i = (x); i<=(y); ++i)
ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }
void fastscan(ll &number){ bool negative = false; register ll c; number = 0; c =
getchar(); if (c=='-') { negative = true; c = getchar(); }
for (; (c>47 && c<58); c=getchar()) number = number *10 + c - 48; if (negative)
number *= -1; }
#define tatti ios_base::sync_with_stdio(false);cin.tie(0);
bool prime[MAX];
void sieve()
{
mem(prime,true);
prime[0]=prime[1]=false;
for (ll p=2; p*p<=MAX; p++)
{
if (prime[p] == true)
{
for (ll i=p*2; i<=MAX; i += p)
prime[i] = false;
}
}
}
ll power(ll a,ll b,ll m){ if(b==0) return 1; if(b==1) return a%m; ll t=power(a,b/2,m);
t=(t*t)%m; if(b&1)t=(t*a)%m; return t;}
ll modInverse(ll a, ll m) { return power(a, m-2, m); }
/*---------------------------Template ends here --------------------------------*/

int main()
{
    tatti;
    ll n;cin>>n;
    ll a[n]={0};
    F(i,n)cin>>a[i];
    
    ll ans=0;
    ll cnt[n+1]={0};
    F(i,n){
        if(a[i]==1){
            ans++;
            cnt[i+1]=cnt[i]+1;
        }
        else{
            cnt[i+1]=cnt[i];
        }
    }
    // cout<<ans<<nl;
    ll mx=INT_MIN;
    // F(i,n+1)
    //     cout<<cnt[i]<<" ";
    // cout<<nl;
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j++){
            ll cntone=cnt[j]-cnt[i-1];
            ll index=j-i+1;
            ll ch=index-cntone;
            // cout<<ch<<" "<<cntone<<nl;
            if(ans-cntone+ch>mx)
                mx=ans-cntone+ch;
        }
    }
    cout<<mx<<nl;
    return 0;
}