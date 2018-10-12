#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, q;
int a[200005];
ll s[200005];
int main() {
	scanf("%d%d", &n, &q);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		s[i] = s[i - 1] + a[i];
	}
	ll now = 0;
	while (q--) {
		ll k;
		scanf("%lld", &k);
		now += k;
		int idx;
		if (now >= s[n]) {
			now = 0;
			idx = 0;
		}
		else {
			int le, ri, mid;
			le = 0;
			ri = n;
			while (le <= ri) {
				mid = (le + ri) / 2;
				if (s[mid] <= now) {
					idx = mid;
					le = mid + 1;
				}
				else ri = mid - 1;
			}
		}
		printf("%d\n", n-idx);
	}
	return 0;
}