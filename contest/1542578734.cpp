#include <bits/stdc++.h>
using namespace std;
typedef bool boolean;

int n, k;
inline void init() {
	scanf("%d%d", &n, &k);
}

boolean vis[17];
inline void solve() {
	memset(vis, false, sizeof(vis));
	for(int i = 1, num = 0, x; i <= n; i++) {
		num = 0;
		for(int j = 0; j < k; j++) {
			num <<= 1;
			scanf("%d", &x);
			num += x;
		}
		if(!num) {
			puts("YES");
			return;
		}
		if(vis[num]) {
			puts("YES");
			return;
		}
		num ^= (1 << k) - 1;
		for(int s = num; s; s = (s - 1) & num)
			vis[s] = true;
	}
	puts("NO");
}

int main() {
	init();
	solve();
	return 0;
}
