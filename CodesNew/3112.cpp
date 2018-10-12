#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

const int N = 3e5 + 100;
int n, m, k;
int a[N], pos[N];

int main() {
	scanf ("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		scanf ("%d", &a[i]);
		if (a[i] == 0) pos[++m] = i;
	}
	pos[++m] = n+1;
	assert (m >= 0 && m <= n + 1);

	int st = 0, res = 0;
	for (int i = 0; i < m; i++) {
		int fi = pos[max (0, i - k)];
		int se = pos[i+1];
		int len = se - fi - 1;
		if (res < len) {
			res = len;
			st = pos[max (0, i - k) + 1];
		}
	}

	printf("%d\n", res);
	for (int i = 1; i <= n; i++)
		if (i < st) printf("%d ", a[i]); 
		else {
			if (a[i] == 1) printf("1 ");
			else 
				if (k > 0) printf("1 "), k--; 
				else printf("0 ");
		}
	return 0;
}