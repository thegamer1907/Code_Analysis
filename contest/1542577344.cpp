#include <bits/stdc++.h>
using namespace std;
#define eps 1e-6
#define e exp(1.0)
#define pi acos(-1.0)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define SZ(x) ((int)(x).size())
#define All(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define Close() ios::sync_with_stdio(0),cin.tie(0)
#define INF 0x3f3f3f3f
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
const int maxn = 2e5 + 10;
const int maxm = 1e3 + 5;
const int mod = 1e9 + 7;
/* head */
int vis[25];
inline void solve() {
	int n, k;
	memset(vis, 0, sizeof vis);
	scanf("%d%d", &n, &k);
	rep(i, 1, n + 1) {
		int x = 0;
		rep(j, 0, k) {
			int op;
			scanf("%d", &op);
			if (op) x |= (1 << j);
		}
		int v = (1 << k) - 1;
		v ^= x;
		rep(j, 0, (1 << k)) {
			if (vis[j] && ((j | v) == v)) {
				puts("YES");
				return;
			}
		}
		vis[x]++;
	}
	if (vis[0]) puts("YES");
	else puts("NO");
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("test.in", "r", stdin);
	freopen("test.out", "w", stdout);
	long _begin_time = clock();
#endif
	solve();
#ifndef ONLINE_JUDGE
	long _end_time = clock();
	printf("time = %ld ms.", _end_time - _begin_time);
#endif
	return 0;
}