#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double

const int INF = 1e18;
const int MAXN = 200000;

vector <int> cat(MAXN);
vector <int> d(MAXN, 0);
vector <int> vis(MAXN, 0);
vector < vector <int> > a(MAXN);
int ans = 0;
int n, m;

void dfs(int top, int k) {
	vis[top] = 1;
	if (k > m) {
		return;
	}
	if (a[top].size() == 1 && top != 1) {
		ans++;
	}

	for (int i = 0; i < a[top].size(); i++) {
		if (vis[a[top][i]] == 0) {
			int f = 0;
			if(cat[a[top][i]]) f = 1;
			if(cat[top])
			dfs(a[top][i], k + f);
			else dfs(a[top][i], f);
		}
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> cat[i];
	}
	for (int i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	dfs(1, cat[1]);
	cout << ans;
    return 0;
}