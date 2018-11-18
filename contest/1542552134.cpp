#include <bits/stdc++.h>
#define cout if (1) cout

using namespace std;
typedef long long int ll;
typedef pair<ll,ll> pii;
#define pb push_back

const int N = 107;

int n, m;
int s;
vector<pii> adj[N];
int dist[N][N];
ll memo[N][N];

int uf[N], wf[N], qt[N], cnt[N];

int dfs (int u, int p, int i) {
	for (pii to : adj[u]) {
		int v = to.first;
		ll w = to.second;
		if (v == p) continue;
		dist[i][v] = dist[i][u] + w;
		dfs(v, u, i);
	}
}

ll dp (int u, int k) {
	if (k == 0) return 0;

	ll & me = memo[u][k];
	if (me != -1)
		return me;

	ll lo = 0, hi = 1e9;
	while (lo < hi) {
		ll md = (lo + hi + 1)/2;

		int tot = 0;
		for (int v = 0; v < n; v++) {
			if (adj[v].size() > 1 || u == v) continue;
			int t = 0;
			while (t < k && dp(v,k-t-1) + dist[u][v] >= md)
				t++;
			tot += t;
		}

		if (tot >= k)
			lo = md;
		else
			hi = md - 1;
	}

	return me = lo;
}

int find (int u) {
	if (u == uf[u]) return u;
	return uf[u] = find(uf[u]);
}

void join (int u, int v) {
	if ((u = find(u)) == (v = find(v)))
		return;
	if (wf[u] < wf[v]) swap(u,v);
	wf[u] += wf[v];
	uf[v] = u;
}

int main () {
	memset(memo, -1, sizeof memo);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		uf[i] = i;
		wf[i] = 1;
		qt[i] = 0;
	}
	
	for (int i = 1; i < n; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		a--; b--;

		adj[a].pb(pii(b,c));
		adj[b].pb(pii(a,c));
	}

	scanf("%d", &s);
	s--;

	for (int i = 0; i < n; i++) {
		if (i == s) continue;
		for (pii to : adj[i]) {
			int v = to.first;
			ll w = to.second;
			if (v == s) continue;
			join(i,v);
		}
	}

	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		int a;
		scanf("%d", &a);
		a--;
		qt[find(a)]++;
	}

	for (int i = 0; i < n; i++) {
		dist[i][i] = 0;
		dfs(i,i,i);
	}

	ll lo = 0, hi = 1e9;

	while (lo < hi) {
		ll md = (lo + hi + 1)/2;

		for (int v = 0; v < n; v++) {
			if (adj[v].size() > 1 || s == v) continue;
			int t = 0;
			while (t < qt[find(v)] && dp(v,m-t-1) + dist[s][v] >= md)
				t++;
			cnt[find(v)] += t;
		}

		bool ok = 1;
		for (int v = 0; v < n; v++) {
			if (v == find(v) && v != s && cnt[v] < qt[v])
				ok = 0;
			cnt[v] = 0;
		}
		if (ok)
			lo = md;
		else
			hi = md - 1;
	}

	printf("%lld\n", lo);
}
