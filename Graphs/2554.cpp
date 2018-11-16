#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;
#define FOR(i, N) for (int i = 0; i < N; ++i)
#define FORN(i, j, N) for (int i = j; i < N; ++i)
#define MAXN 10009
#define INF 1000000007
#define EPS 1e-9

int N, c[MAXN];
vector<int> p[MAXN];

int dfs(int u, int c1){
	
	int ans = c1 != c[u];
	for (auto v : p[u]){
		ans += dfs(v, c[u]);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>N;
	int a;
	FORN(i, 1, N) {
		cin>>a;
		p[a - 1].push_back(i);
	}
	FOR(i, N) cin>>c[i];
	
	cout<<dfs(0, 0)<<'\n';
}