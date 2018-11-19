#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef long long ll;

const int N = 500100;
const int oo = 1e9;

vector<int> all;
int n , k , have[N], tmp, cur, freq[4], took;

bool check(int msk) {
	memset(freq, 0, sizeof freq);
	took = 0;
	for (int i = 0; i < all.size(); ++i) {
		if ((msk & (1 << i))) {
			if (!have[all[i]])continue;
			took++;
			for (int t = 0 ; t < k ; t++) {
				if ((all[i] & (1 << t))) {
					freq[t]++;
				}
			}
		}
	}
	if (!took)return false;
	for (int i = 0; i < k; ++i) {
		if (freq[i] * 2 > took)return false;
	}
	return true;
}
int main() {
	//freopen("input.txt", "r", stdin);
	scanf("%d%d", &n, &k);
	for (int i = 0; i < (1 << k); ++i) {
		all.push_back(i);
	}
	for (int i = 0; i < n; ++i) {
		cur = 0;
		for (int f = 0 ; f < k ; ++f) {
			cur *= 2;
			scanf("%d", &tmp);
			cur += tmp;
		}
		if (cur == 0) {
			puts("YES");
			return 0;
		}
		have[cur]++;
	}
	for (int j = 0 ; j < (1 << all.size()); ++j) {
		if (check(j)) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}