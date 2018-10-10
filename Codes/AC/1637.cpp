/*
@resource: codeforces 812c
@date: 2017-7-20
@author: QuanQqqqq
@algorithm: binary_search 
*/
#include <bits/stdc++.h>

#define MAXN 1000005
#define ll long long

using namespace std;

ll n, s, tot, ans1;
ll item[MAXN];
ll p[MAXN];

bool check(ll k) {
	for (int i = 0; i < n; i++) {
		p[i] = k * (i + 1) + item[i];
	}
	sort(p, p + n);
	tot = 0;
	for (ll i = 0; i < k; i++) {
		tot += p[i];
	}
	return tot <= s;
}

ll binary_search(ll l, ll r) {
	ll mid = l + r >> 1;
	ll ans = mid;
	while (l <= r) {
		mid = l + r >> 1;
		if (check(mid)) {
			ans = mid;
			ans1 = tot;
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	return ans;
}

int main() {
	scanf("%lld %lld", &n, &s);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &item[i]);
	}
	ll k = binary_search(0, n);
	if (k == 0) {
		printf("0 0\n");
	} else {
		printf("%lld %lld\n", k, ans1);
	}
	
}