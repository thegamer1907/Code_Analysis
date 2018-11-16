#include <bits/stdc++.h>

using namespace std;

#define allof(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define eb emplace_back
#define exists(s, e) (s.find(e)!=s.end())
#define INF 0x3f3f3f3f
#define f first
#define s second
#define endl '\n'

typedef pair<int, int> pii;
typedef long long ll;

/*
At position i, you can move to i + dis[i]
Simple dfs, check if vis
*/

const int MAXN = 3e4 + 5;

int dis[MAXN];
bool vis[MAXN];

void dfs(int cur, int par) {
	vis[cur] = true;
	if(cur == par) return;
	dfs(cur + dis[cur], cur);
}

int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);

	int n, t;
	cin >> n >> t;

	for(int i=1; i<=n; i++) {
		cin >> dis[i];
	}

	dfs(1, 0);

	// for(int i=1; i<=n; i++) {
	// 	cout << i << " " << vis[i] << endl;
	// }
	
	if(vis[t]) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;

}