#include <bits/stdc++.h>
using namespace std;
int n, k;
int main() {
	scanf("%d%d", &n, &k);
	k = 240 - k;
	int sum = 0, solve = 0;
	for (int i = 1; i <= n; i++) {
		if (sum + 5 * i > k) break;
		sum += 5 * i;
		solve++;
	}
	printf("%d\n", solve);
	return 0;
}