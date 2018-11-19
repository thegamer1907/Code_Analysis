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
	int h, m, s, t1, t2;
	if (!(cin >> h >> m >> s >> t1 >> t2)) {
		return false;
	}
	t1 %= 12;
	t2 %= 12;
	h %= 12;
	bool in12 = false, in21 = false;
	for (int i = t1; i != t2; i = (i + 1) % 12) {
		if (h == i) {
			in12 = true;
		}
	}
	for (int i = t2; i != t1; i = (i + 1) % 12) {
		if (h == i) {
			in21 = true;
		}
	}
	for (int i = t1; i != t2; i = (i + 1) % 12) {
		if (m/5 == i) {
			in12 = true;
		}
	}
	for (int i = t2; i != t1; i = (i + 1) % 12) {
		if (m/5 == i) {
			in21 = true;
		}
	}
	for (int i = t1; i != t2; i = (i + 1) % 12) {
		if (s/5 == i) {
			in12 = true;
		}
	}
	for (int i = t2; i != t1; i = (i + 1) % 12) {
		if (s/5 == i) {
			in21 = true;
		}
	}
	bool ans = !in12 or !in21;
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