#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define trace(x) cerr << #x << ": " << x << '\n'
#define trace2(x,y) cerr << #x << ": " << x << " | " << #y << ": " << y << '\n';
#define trace3(x,y,z) cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << '\n';
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define sz(v) ((int)v.size())
#define clr(v,x) memset(v, x, sizeof(v))
#define REP(i,x,y) for(int (i)=(x);(i)<(y);(i)++)
#define RREP(i,x,y) for(int (i)=(x);(i)>=(y);(i)--)
#define mp make_pair
#define fst first
#define snd second
typedef long long ll;
typedef pair<int, int> ii;
typedef long double ld;

const int MOD = 1e9 + 7;
const int oo = 1e9;
const int N = 1e4 + 2;

int must[N], vis[N];;
vector<int> adj[N];

int dfs(int u, int x){
	vis[u] ++;
	int ret = 0;
	if(must[u] != x) ret++;
	for(auto v: adj[u]){
		if(!vis[v]) ret += dfs(v, must[u]);
	}
	return ret;
}

int main(){
	fastio;
	int n; cin >> n;
	REP(i,0,n-1){
		int a; cin >> a;
		adj[i+2].pb(a); adj[a].pb(i+2);
	}
	REP(i,1,n+1) cin >> must[i];
	cout << dfs(1,0) << endl;
	return 0;
}	
