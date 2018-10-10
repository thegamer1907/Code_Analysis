#include <bits/stdc++.h>
using namespace std;

template <typename T> T load() { T r; cin >> r; return r; }
template <typename T> vector<T> loadMany(int n) { vector<T> rs(n); generate(rs.begin(), rs.end(), &load<T>); return rs; }

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	auto n = load<int>();
	auto xs = loadMany<int>(n);
	auto j = n;
	auto sl = 0ll;
	auto sr = 0ll;
	auto best = 0ll;
	for (int i=0; i<=j; sl += xs[i++]) {
		while (sr < sl)
			sr += xs[--j];
		if (i <= j and sl == sr)
			best = sl;
	}
	cout << best << '\n';
}
