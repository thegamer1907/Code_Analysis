#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e2 + 1;
int a[MAXN];

int main() {
	int n, x;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &x);
		a[i] = x + a[i - 1];
	}

	int ans = 0;
	for(int i = 1; i <= n; i++)
		for(int j = i; j <= n; j++) {
			ans = max(ans, (j - i + 1) - 2 * (a[j] - a[i - 1]) + a[n]);
		}

	printf("%d\n", ans);
	return 0;
}