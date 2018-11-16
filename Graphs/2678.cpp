#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int n, m, k; cin >> n >> m >> k;
	int x = 1, y = 1;
	int flg = 1;
	for (int i = 0; i < k - 1; i++) {
		if (y > m) {
			y--; x++;
			flg *= -1;
		}
		if (y == 0) {
			y++; x++;
			flg *= -1;
		}
		printf("2 %d %d ", x, y);
		y+=flg;
		if (y > m) {
			y--; x++;
			flg *= -1;
		}
		if (y == 0) {
			y++; x++;
			flg *= -1;
		}
		printf("%d %d\n", x, y);
		y+=flg;
	}
	printf("%d ", n * m - 2 * (k - 1));
	for (int i = 0; i < n * m - 2 * (k - 1); i++) {
		if (y > m) {
			y--; x++;
			flg *= -1;
		}
		if (y == 0) {
			y++; x++;
			flg *= -1;
		}
		printf("%d %d ", x, y);
		y+=flg;
	}
	return 0;
}

                                                                                   