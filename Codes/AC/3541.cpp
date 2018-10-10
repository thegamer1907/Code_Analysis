#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const LL inf = 1e18;

LL n;

bool check(LL k) {
	LL sum = 0, t = n;
	while (t) {
		k = min(k, t);
		t -= k;
		sum += k;
		t -= t / 10;
	}
	if (sum >= (n + 1) / 2) return 1;
	return 0;
}

int main() {
#ifdef xunzhen
	freopen("C.in", "r", stdin);
	freopen("C.out", "w", stdout);
#endif

	cin >> n;

	LL l = 1, r = inf;
	while (l < r) {
		LL mid = (l + r) >> 1;
		if (check(mid)) r = mid;
		else l = mid + 1;
	}

	cout << r << endl;

	return 0;
}