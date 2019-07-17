#include <bits/stdc++.h>
#define Int int64_t

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	Int N, M, K;
	cin >> N >> M >> K;
	vector<Int> p(M);
	for (int i = 0; i < M; ++i) { cin >> p[i]; }
	p.push_back(1e10);

	int res = 0;
	int L = 1, R = K;
	while (L <= p[M-1]) {
		int l = lower_bound(p.begin(), p.end(), L) - p.begin();
		int r = upper_bound(p.begin(), p.end(), R) - p.begin();
		if (l == r) {
			while (true) {
				if (L <= p[r] && p[r] <= R) {
					break;
				} else {
					L = R + 1;
					R = L + K - 1;
				}
			}
			continue;
		}

		++res;
		int cnt = r - l;
		L = R + 1;
		R = L + cnt - 1;
	}
	cout << res << endl;

	return 0;
}