#include <bits/stdc++.h>

using namespace std;

int b[102], g[102];
int n, m;

signed main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &b[i]);
	}
	scanf("%d", &m);
	for (int i = 1; i <= m; i++) {
		scanf("%d", &g[i]);
	}
	int res = 0;
	sort(b+1, b+1+n);
	sort(g+1, g+1+m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (abs(b[i] - g[j]) <= 1) {
				g[j] = INT_MAX;
				res ++;
				break;
			}
		}
	}
	cout << res;
}