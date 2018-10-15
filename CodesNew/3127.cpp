// dile a la jardinera que traigo flores
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
#define pb push_back
#define ff first
#define ss second
#define tm1 ff
#define tm2 ss.ff
#define tm3 ss.ss
#define sz(x) int(x.size())
#define fill(x,v) memset(x,v,sizeof(x))
#define all(v) (v).begin(),(v).end()
#define FER(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define IFR(i,a,b) for(ll i = ll(a); i >= ll(b); i--)
#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
#define N 300005
#define M 26
#define MAXN 4353546332
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

 
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
  cerr << name << " : " << arg1 << endl;}
 
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
  const char* comma = strchr(names + 1, ',');
  cerr.write(names, comma - names) << " : " << arg1<<" | ";
  __f(comma+1, args...);}
#else
#define trace(...)
#endif
ll ar[N],dp[N];
inline ll go(ll l, ll r){
  ll ans;
  ans= (l==0)?dp[r]: dp[r]-dp[l-1];
  return r-l+1-ans;
}
int main(){
  fastio;
  ll n,k;  cin>>n>>k;
  vi v;
  FER(i,0,n) {cin>>ar[i]; if(ar[i]==0) v.pb(i);}
  FER(i,0,n) dp[i]=i==0? ar[i]:dp[i-1]+ar[i];
  ll froz=-1,ls, rs;
  if(k==0){
    ll ans=0,ini;
    v.pb(-1), v.pb(n);
    sort(all(v));
    FER(i,0,sz(v)){
      if(i==0) ini=v[i];
      else ans=max(ans, v[i]-ini), ini=v[i];
    }
    if(ans!=0) ans=ans-1;
    cout<<ans<<endl;
    FER(i,0,n) cout<<ar[i]<<" ";
    cout<<endl;
  }
  else{
  FER(j,0,n){
    ll ini=j, fin=n;
    FER(i,0,25){
      if(ini+1==fin) break;
      ll mid=(ini+fin)/2;
      if(go(j,mid)<=k) ini=mid;
      else fin=mid;
    }
    ll val1=go(j,ini), val2=go(j,fin);
    if(ini-j>froz){
      froz=ini-j;
      ls=j, rs=ini;
    }
  }
  cout<<froz+1<<endl;
  FER(i,0,ls) cout<<ar[i]<<" ";
  FER(i,ls,rs+1) cout<<1<<" ";
  FER(i,rs+1,n) cout<<ar[i]<<" ";
  cout<<endl;
  }
  return 0;
}