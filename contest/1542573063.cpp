#include <bits/stdc++.h>
using namespace std;

const int N = 100005, K = 21;
const long long inf = 1e18;

int n, k;
int a[N];
long long f[N][K];

long long ans;
int curL;
int curR;
int cnt[N];

void upd(int x, int v) {
	if (v == 1) ans += cnt[a[x]], cnt[a[x]]++;
	else cnt[a[x]]--, ans -= cnt[a[x]];
}

void query(int l, int r) {
	while(curL > l) --curL, upd(curL, +1);
	while(curL < l) upd(curL, -1), ++curL;
	while(curR > r) upd(curR, -1), --curR;
	while(curR < r) ++curR, upd(curR, +1);
}

struct Node {
	int l; int r; int xmin; int xmax;
	Node(int l=0, int r=0, int xmin=0, int xmax=0): l(l), r(r), xmin(xmin), xmax(xmax) {} 
};
vector<Node> cur, nxt;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n >> k;
	curL = 1, curR = 0;
	for (int i = 1; i <= n; ++i) cin >> a[i];

	for (int i = 0; i <= n; ++i) for (int j = 0; j <= k; ++j) f[i][j] = inf;
	f[0][0] = 0;
	
	for (int i = 1; i <= k; ++i) {
		cur.push_back(Node(1, n, 1, n));
		while(!cur.empty()) {
			for (auto &p: cur) {
				int l = p.l, r = p.r, xmin = p.xmin, xmax = p.xmax;
				int mid = ((l + r) >> 1);
				int best = xmin;

				for (int j = xmin; j <= min(mid, xmax); ++j) {
					query(j, mid);
					if (f[mid][i] > f[j-1][i-1] + ans) {
						f[mid][i] = f[j-1][i-1] + ans;
						best = j;
					}
				}

				if (l < r) {
					nxt.push_back(Node(l, mid, xmin, best));
					nxt.push_back(Node(mid + 1, r, best, xmax));
				}
			}

			cur.swap(nxt);
			nxt.clear();
		}
	}

	cout << f[n][k] << endl;
}