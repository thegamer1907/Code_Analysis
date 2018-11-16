#include <bits/stdc++.h>
using namespace std;
int n, k;
int main() {
	scanf("%d%d", &n, &k);
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += i * 5;
		if (k + s > 240) {
			return !printf("%d\n", i - 1);
		}
	}
	printf("%d\n", n);
	return 0;
}