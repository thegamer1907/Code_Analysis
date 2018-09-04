#include<iostream>
#include<iomanip>
#include<iterator>
#include<map>
#include<unordered_map>
#include<set>
#include<queue>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>ordered_set;
*/
using namespace std;
/////////////////// TYPES & MACROS ///////////////////////////////
#define INFLL 0x3fffffffffffffffLL
#define INF 0x3f3fffff
#define mp make_pair
#define eb emplace_back
#define pb push_back
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define vv vector
typedef long long int ll;
typedef double dd;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const ll MOD=1000000007;
/////////////////// DEBUG MODE ///////////////////////////////////
#define D(x) cerr<<"DEBUG: "<<#x<<" is: "<<x<<'\n';
#define DD(x,y) cerr<<"DEBUG:("<<#x<<","<<#y<<") are: "<<x<<" "<<y<<'\n';
/////////////////// GLOBAL VARIABLES ////////////////////////////
vector<vector<int>> adj; vector<bool> vis; vi dist;
int dx8[]={0,1,1,1,0,-1,-1,-1}, dy8[]={1,1,0,-1,-1,-1,0,1},dx4[]={0,1,0,-1}, dy4[]={1,0,-1,0};
/////////////////// FUNCTIONS ////////////////////////////////////
inline ll mexp(ll x,ll n,ll m){ll res=1;while(n){if(n&1)res=(res*x)%m;n>>=1;x=((x%m)*(x%m))%m;}return res;}
bool ispow2(ll x){ return x && (!(x&(x-1)));}
ll gcd(ll x, ll y){ if(x==0 || y==0) return x+y; else return gcd(y%x,x);}

/////////////////// MAIN STARTS //////////////////////////////////
int main(){
  ios::sync_with_stdio(0);  cin.tie(0); cout<<fixed;   cerr<<fixed;
  cout<<setprecision(8); cerr<<setprecision(3);
#ifdef DEBUG
  freopen("ip.txt","r",stdin); //freopen("op.txt","w",stdout);
  clock_t tStart = clock();
#endif

  ll n,k; cin>>n>>k;
  unordered_map<ll,ll> freq,dp;
  ll ans=0;
  if(k==1){
    for(int i=0;i<n;++i) {ll t; cin>>t; freq[t]++;}
    for(auto& [k,v]: freq) if(v>=3) ans+=(v*(v-1)*(v-2))/6;
    cout<<ans<<'\n'; return 0;
  }
  for(int i=0;i<n;++i){
    ll t; cin>>t;
    if(t%k==0){
      if(t%(k*k)==0) ans+=dp[t/k];
      dp[t]+=freq[t/k];
    }
    freq[t]++;
  }
  cout<<ans<<'\n';


#ifdef DEBUG
	cerr<<"\nExecution time: "<<(((double)clock() - tStart)/CLOCKS_PER_SEC)*1e3<<"ms.\n";
#endif
  return 0;
}
