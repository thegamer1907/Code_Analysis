#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair < int, int > ii;

const int N = 1e5 + 5;

int n, k;
int cnt[16];

int main() {

// #ifdef D
// 	freopen("in.txt", "r", stdin);
// 	freopen("out.txt", "w", stdout);
// #endif

	scanf("%d %d", &n, &k);

	for(int i = 1; i <= n; i++) {
		int x = 0;
		for(int j = 1; j <= k; j++) {
			int y;
			scanf("%d", &y);
			x = (x << 1) | y;
		}
		if(x == 0) {
			puts("YES");
			return 0;
		}
		cnt[x]++;
	}

	for(int i = 0; i < k; i++) {
		for(int j = 0; j < (1 << k); j++) {
			if(!(j & (1 << i)))
				cnt[j ^ (1 << i)] += cnt[j];
		}
	}

	for(int i = 0; i < (1 << k); i++) {
		int j = ((1 << k) - 1) ^ i;
		if(cnt[i] and cnt[j]) {
			puts("YES");
			return 0;
		}
	}

	puts("NO");

    return 0;

}

