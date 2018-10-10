#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, m;

ll sol(ll x) {
	ll rtn = 0;
	for(ll i=1; i<=n; i++)
		rtn += min(m, x/i);
	return rtn;
}

int main() {
	ll k;
	scanf("%I64d%I64d%I64d", &n, &m, &k);
	ll l = 1, r = n * m;
	while(l < r) {
		ll mid = (l + r) / 2;
		if(sol(mid) >= k) r = mid;
		else l = mid + 1;
	}
	printf("%I64d\n", l);
	return 0;
}