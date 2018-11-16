#include <bits/stdc++.h>
using namespace std;

const int MX = 505;

char pan[MX][MX];
int val[MX][MX];
int H, W;

int main() {
	
//	freopen("in.txt", "r", stdin);
//	freopen("out.txt", "w", stdout);
	
	scanf("%d%d", &H, &W);
	for (int i = 0; i < H; i++) scanf("%s", pan + i);
	
	for (int i = 1; i <= H; i++) {
		for (int j = 0; j < W; j++) {
			if (j) val[i][j + 1] = val[i][j];
			for (int k = 0; k < i; k++) {
				if (j) val[i][j + 1] += (pan[k][j - 1] == '.' && pan[k][j] == '.');
				if (k) val[i][j + 1] += (pan[k][j] == '.' && pan[k - 1][j] == '.');
			}
		}
	}
	
	int q; scanf("%d", &q);
	while (q--) {
		int r1, c1, r2, c2; scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
		int ans = val[r2][c2] - val[r1 - 1][c2] - val[r2][c1 - 1] + val[r1 - 1][c1 - 1];
		if (c1 > 1) for (int i = r1 - 1; i < r2; i++) {
			ans -= (pan[i][c1 - 2] == '.' && pan[i][c1 - 1] == '.');
		}
		if (r1 > 1) for (int i = c1 - 1; i < c2; i++) {
			ans -= (pan[r1 - 2][i] == '.' && pan[r1 - 1][i] == '.');
		}
		printf("%d\n", ans);
	}
	
	return 0;
	
}

                                                                                                