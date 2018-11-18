#include <bits/stdc++.h>
using namespace std;

#define N 101010

int cnt[22];

int K;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	K = (1 << m);
	for (int i = 1; i <= n; i ++) {
		int a = 0, x;
		for (int j = 0; j < m; j ++) {
			scanf("%d", &x);
			a = a * 2 + x;
		}
		cnt[a] ++;
	}
	if (cnt[0]) {
		puts("YES");
		return 0;
	}
	for (int i = 1; i < K; i ++) for (int j = 1; j < K; j ++) if ((i & j) == 0) {
		if (cnt[i] && cnt[j]) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");

	return 0;
}
