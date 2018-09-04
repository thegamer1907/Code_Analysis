#include <bits/stdc++.h>

using namespace std;

int n, k;
long long a[222222];
map<long long, long long> cnt, rcnt;

int main() {
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		int q;
		scanf("%d", &q);
		a[i] = q;
		rcnt[q]++;
	}
	long long res = 0;
	for (int i = 1; i <= n; i++) {
		rcnt[a[i]]--;
		if (a[i] % k == 0) {
			res += cnt[a[i]/k]*rcnt[a[i]*k];
		}
		cnt[a[i]]++;
	}

	printf("%lld\n", res);

	return 0;
}
