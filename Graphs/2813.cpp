#include <bits/stdc++.h>

const int N = 100100;

int c[N];
std::set<int> setik[N];

int main(void) {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &c[i]);
	}
	for (int i = 0; i < m; ++i) {
		int from, to;
		scanf("%d%d", &from, &to);
		if (c[from - 1] != c[to - 1]) {
			setik[c[from - 1]].insert(c[to - 1]);
			setik[c[to - 1]].insert(c[from - 1]);
		}
	}
	int ans = c[0];
	for (int i = 0; i < n; ++i) {
		if (setik[c[i]].size() > setik[ans].size() || setik[c[i]].size() == setik[ans].size() && c[i] < ans) {
			ans = c[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}