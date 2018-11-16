#include <bits/stdc++.h>
using namespace std;
#define printvector(v,n) for(int i=1;i<=n;i++) cout<<v[i]<<" "; cout<<ln;
#define printint(v) copy(begin(v), end(v), ostream_iterator<int>(cout," "))
#define printintv(s,e) copy(s,e, ostream_iterator<int>(cout," "))
#define forstl(i,v) for(auto &i: v)
#define forn(i,e) for(int i = 0; i < e; i++)
#define forsn(i,s,e) for(int i = s; i < e; i++)
#define rforn(i,s) for(int i = s; i >= 0; i--)
#define rforsn(i,s,e) for(int i = s; i >= e; i--)
#define clz(a) __builtin_clz(a) // count leading zeroes
#define ctz(a) __builtin_ctz(a) // count trailing zeroes
#define popc(a) __builtin_popcount(a) // count set bits (for ints only diff for int64)
//https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html for other in built
#define ln "\n"
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define RFOR(i,b,a) for(int i=b; i>=a; i--)
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define setPresent(x,s) (s.find(x)!=s.end())
typedef long long int64;
typedef pair<int,int> p32;
typedef pair<int64,int64> p64;
typedef pair<double,double> pdd;
typedef vector<int64> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
typedef map<int,int> m32;
int n,ans;
v32 adj[10001];
int p[10001],c[10001];

void dfs(int s,int prev,int prevCol){
	if(c[s]!=prevCol) ans++;
	for(auto u:adj[s]){
		if(u==prev) continue;
		dfs(u,s,c[s]);
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>n;
	FOR(i,2,n){
		cin>>p[i];
		adj[i].pb(p[i]);
		adj[p[i]].pb(i);
	}
	FOR(i,1,n) cin>>c[i];
	dfs(1,0,-1);
	cout<<ans<<endl;
	return 0;
}