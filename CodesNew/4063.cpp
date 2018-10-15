#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#define D(x...) printf(x)
#else
#define D(x...)
#endif

long long N, Q, A[200200], K[200200], sum[200200];

int bs(long long x) {
	int l = 0, r = N;
	while (l < r-1) {
		int m = (l+r)/2;
		if (sum[m] <= x) l = m;
		else r = m;
	}
	if (sum[l] > x) return N-l;
	if (l == 0) return N-1;
	return N-l-1;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> Q;
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < Q; i++) cin >> K[i];
	for (int i = 0; i < N; i++) {
		if (i) sum[i] = sum[i-1];
		sum[i] += A[i];
	}
	long long cur = 0;
	for (int i = 0; i < Q; i++) {
		cur += K[i];
		if (cur >= sum[N-1]) {
			cur = 0;
			cout << N << "\n";
			continue;
		}
		cout << bs(cur) << "\n";
	}
}
