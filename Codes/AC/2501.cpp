#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> primes;

void sieve() {
	bool was[(int)1e7 + 1] = {0};
	for(int i = 2; i <= 10000000; i++) {
		if(!was[i]) primes.push_back(i);
		for(long long j = 1ll * i * i; j <= 10000000; j += i) {
			was[j] = 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	sieve();
	int n;
	cin >> n;
	int a[n];
	int cnt[(int)1e7 + 1] = {0};
	int psum[(int)1e7 + 1] = {0};
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	for(auto x : primes) {
		int cur = 0;
		for(int i = x; i <= (1e7); i += x) {
			cur += cnt[i];
		}
		psum[x] = cur;
	}
	for(int i = 1; i <= 10000000; i++) {
		psum[i] += psum[i - 1];
	}
	int m;
	cin >> m;
	while(m--) {
		int l, r;
		cin >> l >> r;
		cout << psum[min(r, (int)1e7)] - psum[min(l - 1, (int)1e7)] << '\n';
	}
	return 0;
}