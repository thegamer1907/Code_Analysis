#include <stdio.h>
#include <string.h>

const int N = 10000005;

int n, m, v[N], g[N], s[N];

void init() {
	memset(v, 0, sizeof(v));
	memset(g, 0, sizeof(g));
	memset(s, 0, sizeof(s));

	int a;
	scanf("%d", &n);
	for (int i = 0; i <n; i++) {
		scanf("%d", &a);
		g[a]++;
	}

	for (int i = 2; i <N; i++) {
		if (v[i]) continue;
		for (int j = i; j <N; j += i) {
			if (g[j]) s[i] += g[j];
			v[j] = 1;
		}
	}
	for (int i = 1; i <N; i++) s[i] += s[i-1];
}

void solve() {
	int a, b;
	scanf("%d", &m);
	for (int i = 0; i <m; i++) {
		scanf("%d%d", &a, &b);
		if (a >= N) a = N;
		if (b >= N) b = N - 1;
		printf("%d\n", s[b] - s[a-1]);
	}
}

int main() {
	init();
	solve();
	return 0;
}