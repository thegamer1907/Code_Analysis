#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lf;
const lf PI = 3.1415926535897932384626433832795;

ll N, M, K;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N >> M >> K;
	
	ll lo = 1, hi = N*M, mid;
	while (lo < hi) {
		mid = (lo + hi) / 2;
		ll c1 = 0, c2 = 0;
		for (ll i = 1; i <= N; i++) {
			c1 += min(M, mid / i);
			if (mid % i == 0 && mid / i <= M) {
				c1--;
				c2++;
			}
		}
		if (c1 + c2 >= K) {
			hi = mid;
		}
		else {
			lo = mid+1;
		}
	}

	cout << lo << "\n";
	
	return 0;
}