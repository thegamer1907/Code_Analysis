#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>
#include <bitset>
#include <string>
#include <cmath>
#include <set>
#include <map>
#define Rep(i, x, y) for (int i = x; i <= y; i ++)
#define Dwn(i, x, y) for (int i = x; i >= y; i --)
#define RepE(i, x) for (int i = pos[x]; i; i = g[i].nex)
#define ev g[i].y
using namespace std;
typedef long long ll;
typedef double db;
const int mod = 1000000007, N = 100005, D = 22;
const ll inf = 1ll << 60;
int n, m, q, dm[N * 4], s[N], lt, c[N], ls;
ll f[N][D], f0;
void solve(int x, int l, int r, int a, int b) {
	if (l > r) return ;
	int mid = (l + r) >> 1;
	if (!dm[x]) {
		ll res = inf;
		Rep(i, lt + 1, mid) {
			f0 += s[ c[i] ];
			s[ c[i] ] ++;
			// cout << i<<" "<<f0<<endl;
		}
		lt = mid;
		// if (ls < a) cout <<"p";
		Rep(i, ls + 1, a) {
			s[ c[i] ] --;
			f0 -= s[ c[i] ];
		}
		Rep(i, a, min(mid, b)) {
			if (i > a) {
				s[ c[i] ] --;
				f0 -= s[ c[i] ];
			}
			if (res > f0 + f[i][q - 1]) {
				res = f0 + f[i][q - 1];
				dm[x] = i;
			}
		}
		// cout << mid<<" ---------- "<<dm[x]<<endl;
		Rep(i, mid + 1, b) {
			s[ c[i] ] --;
			f0 -= s[ c[i] ];
		}
		ls = b;
		f[mid][q] = res;
		return ;
	}
	solve(x << 1, l, mid - 1, a, dm[x]);
	solve(x << 1 | 1, mid + 1, r, dm[x], b);
}
int main()
{
	scanf ("%d%d", &n, &m); m --;
	Rep(i, 1, n) {
		scanf ("%d", &c[i]);
		f[i][0] = f[i - 1][0] + s[ c[i] ];
		s[ c[i] ] ++;
		// cout << i<<" "<<0<<" "<<f[i][0]<<endl;
	}
	Rep(j, 1, m) {
		memset(dm, 0, sizeof(dm));
		q = j;
		Rep(i, 1, D - 1) {
			memset(s, 0, sizeof(s));
			// dep = i;
			lt = 0;
			ls = 0;
			f0 = 0;
			solve(1, 1, n, 1, n);
		}
		// Rep(i, 1, n) cout << i<<" "<<j<<" "<<f[i][j]<<endl;
	}
	printf("%I64d\n", f[n][m]);

	return 0;
}
