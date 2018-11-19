#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long lint;
typedef complex<double> point;

template<typename Key, typename Value>
using hash_map = cc_hash_table<Key, Value>;
template<typename T, typename Cmp = less<T>>
using oset = tree<T, null_type, Cmp, rb_tree_tag, tree_order_statistics_node_update>;

const int INF = 0x3f3f3f3f;
const lint INFL = 0x3f3f3f3f3f3f3f3fLL;
const double E = 1e-9, pi = 2 * acos(0);

template<typename T, typename U> void amin(T &x, U y) { if (y < x) x = y; }
template<typename T, typename U> void amax(T &x, U y) { if (x < y) x = y; }

bool solve(int testNumber) {
	int n, k;
	if (!(cin >> n >> k)) {
		return false;
	}
	vector<bool> counter(1 << k);
	for (int i = 0; i < n; i++) {
		int mask = 0;
		for (int j = 0; j < k; j++) {
			int x;
			cin >> x;
			mask = 2 * mask + x;
		}
		counter[mask] = true;
	}
	bool ans = false;
	for (int i = 0; i < (1 << k); i++) {
		for (int j = 0; j < (1 << k); j++) {
			if (!(i & j) and counter[i] and counter[j]) {
				ans = true;
			}
		}
	}
	printf("%s\n", ans ? "YES" : "NO");
	return true;
}

void init(const char *in = nullptr, const char *out = nullptr) {
	if (in) freopen(in, "r", stdin);
	if (out) freopen(out, "w", stdout);
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(nullptr);
	init();
	for (int i=1; solve(i); i++);
	return 0;
}