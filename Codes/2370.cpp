#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 1;
int fPrime[N];
int cnt[N];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for (int i = 2; i * i < N; i++) {
		if (!fPrime[i]) {
			for (int j = i * 2; j < N; j += i)
				if (!fPrime[j])
					fPrime[j] = i;

		}
	}

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		int p = 1;
		while (fPrime[x]) {
			p = fPrime[x];
			while (fPrime[x] == p)
				x /= p;
			++cnt[p];
		}
		if (p != x)
			++cnt[x];
	}
	for (int i = 1; i < N; i++)
		cnt[i] += cnt[i - 1];

	int q;
	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
		r = min(r, N - 1);
		l = min(l, r);

		cout << cnt[r] - cnt[l - 1] << "\n";
	}
	return 0;
}
