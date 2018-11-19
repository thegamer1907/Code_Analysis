#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int MAXN = 103;
const int INF = 0x28282828;

#define debug(...) fprintf(stderr, __VA_ARGS__)
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define fillchar(a, s) memset((a), (s), sizeof(a))

int N, S, M;
int A[MAXN], B[MAXN], C[MAXN];
int num[MAXN];
int mpid[MAXN][MAXN], weight[MAXN][MAXN];
vector<int> adj[MAXN];
int dp[MAXN][MAXN][MAXN];	//dp[edge][is it same direction as A->B]?

int getdp (int a, int b, int nface, int noth) {
	//edge id, # of criminals that edge direction faces, and number of other criminals
	if (nface == 0 && noth == 0) {
		return 0;
	}
	if (nface == 0) {
		return INF;
	}

	int &ref = dp[mpid[a][b]][nface][noth];
	if (ref != INF) {
		return ref;
	}

	if (adj[b].size() == 1) {
		return ref = (noth ? getdp(b, a, noth, 0) + weight[a][b] : 0);
	}

	int lo = 0, hi = INF;
	while (hi - lo > 1) {
		int mid = (lo + hi) / 2;
		int tot = nface + noth;
		int nleft = nface;

		for (int c : adj[b]) {
			//b -> c
			if (c == a) {
				continue;
			}

			int take = 0;
			while (take < nface) {
				int val = getdp(b, c, take + 1, tot - (take + 1)) + weight[b][c];
				if (mid < val) {
					take++;
				} else {
					break;
				}
			}
			nleft -= take;
		}
		if (nleft > 0) {
			hi = mid;
		} else {
			lo = mid;
		}
	}
	return ref = hi;
}

//criminal dfs
int cdfs (int x, int p) {
	int res = num[x];
	for (int y : adj[x]) {
		if (y != p) {
			res += cdfs(y, x);
		}
	}
	return res;
}

int main() {
	scanf("%d", &N);
	for (int i = 1; i < N; i++) {
		int u, v, w;
		scanf("%d %d %d", &u, &v, &w);
		adj[u].push_back(v);
		adj[v].push_back(u);
		tie(mpid[u][v], mpid[v][u]) = pii(2 * i - 1, 2 * i);
		weight[u][v] = weight[v][u] = w;
	}
	scanf("%d", &S);
	scanf("%d", &M);
	fillchar(dp, 40);
	for (int i = 1; i <= M; i++) {
		int x;
		scanf("%d", &x);
		num[x]++;
	}

	int ans = INF;
	for (int y : adj[S]) {
		int sub = cdfs(y, S);
		ans = min(ans, weight[S][y] + getdp(S, y, sub, M - sub));
	}
	printf("%d\n", ans);
}
