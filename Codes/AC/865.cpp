#include<bits/stdc++.h>
using namespace std;
/////////////////// TYPES & MACROS ///////////////////////////////
#define INFLL 0x7fffffffffffffffLL
#define INF 0x7fffffff
#define mp make_pair
#define eb emplace_back
#define pb push_back
#define all(x) x.begin(),x.end()
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll MOD=1e9+7;
/////////////////// DEBUG MODE ///////////////////////////////////
#define D(x) cerr<<"\nDEBUG: "<<#x<<" is: "<<x<<'\n'
#define error(args...) {string _s=#args; replace(all(_s),',',' ');\
stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args);}
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
/////////////////// GLOBAL VARIABLES /////////////////////////////
vector<vector<pair<int,int>>> adj; vector<bool> vis;
/////////////////// FUNCTIONS ////////////////////////////////////
template<class T>
T maxx(T a, T b) {return a>b?a:b;}
template<typename T, typename... Args>
T maxx(T a, T b, Args... args){return maxx(a>b?a:b, args...);}
ll mexp(ll x, ll n, ll m){
  ll res=1;  while(n){if(n&1) res=(res*x)%m;n>>=1; x=((x%m)*(x%m))%m;}
  return res;
}
double pow(double a, int n) {
  if(n == 0) return 1;if(n == 1) return a;
  double t = pow(a, n/2);return t * t * pow(a, n%2);
}
/////////////////// MAIN STARTS //////////////////////////////////
int main(){
  ios::sync_with_stdio(0);  cin.tie(0);   cout<<fixed; cerr<<fixed;
  cout<<setprecision(3); cerr<<setprecision(3);
  #ifdef DEBUG
  freopen("ip.txt","r",stdin); //freopen("op.txt","w",stdout);
  clock_t tStart = clock();
  #endif

	ll n,pos,idx=1; cin>>n>>pos;
	while(!(pos&1)){++idx; pos>>=1;}
	cout<<idx<<'\n';

	#ifdef DEBUG
	cerr<<"\nExecution time: "<<(((double)clock() - tStart)/CLOCKS_PER_SEC)*1000<<"ms.\n";
	#endif
  return 0;
}
