#include "bits/stdc++.h"

using namespace std;

constexpr long long blockSize = 9;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin >> n;
	vector<long long> in(n);
	for (long long i = 0; i < n; i++) {
		cin >> in[i];
	}
	long long sum1 = 0;
	long long sum3 = 0;
	long long l = 0;
	long long r = n - 1;
	long long res = 0;
	while (l <= r) {
		if (sum1 < sum3) {
			sum1 += in[l];
			l++;
		} else {
			sum3 += in[r];
			r--;
		}
		if (sum1 == sum3) {
			res = sum1;
		}
	}
	cout << res << endl;
}
