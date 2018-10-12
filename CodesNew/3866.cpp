#include <bits/stdc++.h>

using namespace std;

const int M = 2e5 + 5;
long long n, S = 0, a[M];
long long mx = 0;

int main() {
	scanf("%lld", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
		S += a[i];
		mx = max(mx, a[i]);
	}
	printf("%lld\n", max(mx, S / (n - 1) + !!(S % (n - 1))));

}
