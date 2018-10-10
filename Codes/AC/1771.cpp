#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, k;

ll cek(ll x) {
	ll ret = 0;
	for (int i = 1; i <= m; i++)
		ret += min(x/i, n);
	return ret;
}

int main() {
	scanf("%lld %lld %lld", &n, &m, &k);
	ll l = 1, r = n*m, mid;
	for (int i = 0; i < 50; i++) {
		mid = (l+r)/2;
		if (cek(mid) >= k) r = mid;
		else l = mid+1;
	}
	printf("%lld\n", l);
	return 0;
}
