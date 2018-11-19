#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
typedef pair<int, LL> PIL;
typedef pair<LL, int> PLI;
typedef vector<int> VI;
typedef vector<PII> VPII;
typedef double DB;

#define pb push_back
#define mset(a, b) memset(a, b, sizeof a)
#define all(x) (x).begin(), (x).end()
#define bit(x) (1 << (x))
#define bitl(x) (1LL << (x))
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x.size()))
#define cnti(x) (__builtin_popcount(x))
#define cntl(x) (__builtin_popcountll(x))
#define clzi(x) (__builtin_clz(x))
#define clzl(x) (__builtin_clzll(x))
#define ctzi(x) (__builtin_ctz(x))
#define ctzl(x) (__builtin_ctzll(x))

#define X first
#define Y second

#define Error(x) cout << #x << " = " << x << endl

template <typename T, typename U>
inline void chkmax(T& x, U y) {
	if (x < y) x = y;
}

template <typename T, typename U>
inline void chkmin(T& x, U y) {
	if (y < x) x = y;
}

char s[300][300];
char L[300][300], R[300][300];

int sz[300], dp[16][205];
bool H[16][205][bit(15)];

VI con[205];

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int n, m; scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%s", s[i]);
		strcpy(L[i], s[i]);
		strcpy(R[i], s[i]);
		sz[i] = strlen(s[i]);
	}
	scanf("%d", &m);
	for (int i = n+1; i <= n+m; i++) {
		int u, v; scanf("%d%d", &u, &v);
		con[i].push_back(u);
		con[i].push_back(v);
		sz[i] = min(100000, sz[u] + sz[v]);
		strcpy(s[i], R[u]);
		strcpy(s[i] + strlen(R[u]), L[v]);
		if (sz[u] <= 20) {
			strcpy(L[i], s[i]);
			L[i][20] = 0;
		} else {
			strcpy(L[i], L[u]);
		}
		if (sz[v] <= 20) {
			strcpy(R[i], s[i]);
			int l = strlen(R[i]);
			if (l > 20) {
				reverse(R[i], R[i] + l);
				R[i][20] = 0;
				reverse(R[i], R[i] + 20);
			}
		} else {
			strcpy(R[i], R[v]);
		}
	}
	for (int i = 1; i <= n+m; i++) {
		int l = strlen(s[i]);
		for (int k = 0; k < l; k++) {
			for (int t = 0, j = 1; j <= 15 && k+j <= l; j++) {
				t <<= 1, t |= s[i][k+j-1] - '0';
//				cerr << j << ' ' << i << ' ' << t << endl;
				H[j][i][t] = 1;
			}
		}
		if (i > n) {
			int u = con[i][0], v = con[i][1];
			dp[0][i] = 1;
			for (int j = 1; j <= 15; j++) {
				dp[j][i] = 1;
				for (int k = 0; k < bit(j); k++) {
					H[j][i][k] |= H[j][u][k] | H[j][v][k];
					if (!H[j][i][k]) dp[j][i] = 0;
				}
			}
			int ans = 0;
			for (int &j = ans; j < 15; j++) if (!dp[j+1][i]) break;
			cout << ans << endl;
		}
	}
	return 0;
}

