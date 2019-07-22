#include <bits/stdc++.h>
#define Int int64_t

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	Int N, M, K;
	cin >> N >> M >> K;
	vector<Int> p(M);
	for (int i = 0; i < M; ++i) {
		cin >> p[i];
		--p[i];
	}
	p.push_back(1e10);

	int res = 0;
	int cnt = 0;
	int l = 0, r = 1;
	while (l < r && l < M) {
		Int page = (p[l] - cnt) / K;
		int tmp = 1;
		while (r < M && (p[r] - cnt) / K == page) {
			++r;
			++tmp;
		}
		++res;
		cnt += tmp;
		l = r;
		r = l + 1;
	}
	cout << res << endl;

	return 0;
}