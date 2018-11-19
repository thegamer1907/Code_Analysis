#include <bits/stdc++.h>
using namespace std;
typedef bool boolean;

int n, k;

inline void init() {
	scanf("%d%d", &n, &k); 
}

boolean vis[20];
inline void solve() {
	int rev_flag = (1 << k) - 1;
	for(int i = 1, num, x; i <= n; i++) {
		num = 0;
		for(int j = 0; j < k; j++)
			scanf("%d", &x), num <<= 1, num += x;
		if(!num || vis[num]) {
			puts("YES");
			return; 
		}
		num ^= rev_flag;
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
