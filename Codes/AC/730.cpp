#include <bits/stdc++.h>

#define rep(i, a, b) for (i = (a); i <= (b); i ++)

using namespace std;

int K, len, cnt;

void solve(int pos, int tot, int val) {
	int i;
	if (pos == len && tot >= 0) {
		cnt ++;
		if (cnt == K) {
			printf("%d\n", val * 10 + tot);
			exit(0);
		}
		return ;
	}
	rep(i, 0, 9) {
		if (i > tot) {
			break;
		}
		solve(pos + 1, tot - i, val * 10 + i);
	}
}


int main() {
	int i, j, k;
	scanf("%d", &K);
	rep(i, 2, 10) {
		len = i;
		rep(j, 1, 9) {
			solve(2, 10 - j, j);
		}
	}
	return 0;
}

