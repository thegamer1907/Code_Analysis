#define _USE_MATH_DEFINES

#include <iostream>
#include <iterator>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <unordered_set>
#include <climits>
#include <ctime>

using namespace std;
using ll = long long;
const ll INF = 0x3f3f3f3f3f3f3f3fLL;

void solve() {
	int n, k;
	scanf("%d%d", &n, &k);
	vector<int> cnt(16, 0);
	vector<int> cntsum(16, 0);

	for (int i = 0; i < n; ++i) {
		int mask = 0;
		for (int j = 0; j < k; ++j) {
			int t;
			scanf("%d", &t);
			if (t == 0)
				mask |= (1 << j);
		}
		++cnt[mask];
		for (int m = 0; m < (1 << k); ++m) {
			if ((m | mask) == mask) {
				++cntsum[m];
			}
		}
	}
	int full = (1 << k) - 1;

	bool answer = false;
	for (int i = 0; i < k; ++i) {
		int m = (1 << i);
		answer = answer || (cntsum[m] > 0 && cntsum[full ^ m] > 0);
	}
	for (int i = 0; i < k; ++i) {
		for (int j = i + 1; j < k; ++j) {
			int m = (1 << i) ^ (1 << j);
			answer = answer || (cntsum[m] > 0 && cntsum[full ^ m] > 0);
		}
	}

	printf(answer ? "YES" : "NO");
}

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

#ifdef LOCAL
	cerr << double(clock()) / CLOCKS_PER_SEC << " sec" << endl;
#endif
	return 0;
}