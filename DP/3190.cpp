#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; (i) < (int) (n); (i) ++)
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> a(n);
	rep(i, n) {
		scanf("%d", &a[i]);
	}
	int p = 0;
	int ans = 0;
	int cur = 1;
	while (p < n - 1) {
		if (a[p] * 2 >= a[p + 1]) {
			cur ++;
		} else {
			ans = max(ans, cur);
			cur = 1;
		}
		p ++;
	}
	ans = max(ans, cur);
	printf("%d\n", ans);
        return 0;
}
