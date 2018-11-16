#include<iostream>
#include<iomanip>
#include<iterator>
#include<map>
#include<set>
#include<vector>
#include<string>
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
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const ll MOD=1000000007;
/////////////////// DEBUG MODE ///////////////////////////////////
#define D(x) cerr<<"DEBUG: "<<#x<<" is: "<<x<<'\n';
#define DD(x,y) cerr<<"DEBUG:("<<#x<<","<<#y<<") are: "<<x<<" "<<y<<'\n';
/*#define er(args...) {string _s=#args; replace(all(_s),',',' ');\
stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args);}
void err(istream_iterator<string>) { cout<<endl;}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}*/

/////////////////// GLOBAL VARIABLES ////////////////////////////
vector<vector<int>> adj; vector<bool> vis;
int dx8[]={0,1,1,1,0,-1,-1,-1}, dy8[]={1,1,0,-1,-1,-1,0,1},dx4[]={0,1,0,-1}, dy4[]={1,0,-1,0};
/////////////////// FUNCTIONS ////////////////////////////////////
ll mexp(ll x,ll n,ll m){ll res=1;while(n){if(n&1)res=(res*x)%m;n>>=1;x=((x%m)*(x%m))%m;}return res;}
bool ispow2(ll x){ return x && (!(x&(x-1)));}
int gcd(int x, int y){ if(x==0 || y==0) return x+y; else return gcd(y%x,x);}


/////////////////// MAIN STARTS //////////////////////////////////
int main(){
  ios::sync_with_stdio(0);  cin.tie(0); cout<<fixed;   cerr<<fixed;
  cout<<setprecision(14); cerr<<setprecision(3);
  #ifdef DEBUG
  freopen("ip.txt","r",stdin); //freopen("op.txt","w",stdout);
  clock_t tStart = clock();
  #endif

	int n,m; cin>>n>>m;
  vi pre(100001,0),dp(n+1,0), v(n);
  for(int i=0;i<n;++i) cin>>v[i];
  for(int i=n-1;i>=0;--i){
    if(pre[v[i]]) dp[i]=dp[i+1];
    else {pre[v[i]]=1; dp[i]=dp[i+1]+1;}
  }
  for(int i=0;i<m;++i){
    int t; cin>>t; cout<<dp[t-1]<<'\n';
  }


	#ifdef DEBUG
	cerr<<"\nExecution time: "<<(((double)clock() - tStart)/CLOCKS_PER_SEC)*1e3<<"ms.\n";
	#endif
  return 0;
}
