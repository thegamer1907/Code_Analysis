#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 3;

int n, k;
int cnt[16];

bool Solve() {
	if (cnt[0]) return 1;
	for (int i = 1; i < 15; ++i) {
		int j = 15 ^ i;
		if (! cnt[i]) continue;
		for (int s = j; ; s = (s - 1) & j) {
		 	if (cnt[s]) return 1;
		 	if (! s) break;
		}
	}
	return 0;	
}

int main() {
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; ++i) {
	 	int x = 0;
	 	for (int j = 0; j < k; ++j) {
	 		x <<= 1;
	 		int d; scanf("%d", &d);
	 		x ^= d;
	 	}
	 	++cnt[x];
	}	
	if (Solve()) puts("yes"); else puts("no");
	return 0;
}