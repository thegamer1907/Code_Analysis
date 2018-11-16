#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

using i64 = long long;
using f64 = double;
using f80 = long double;
using pii = pair<int, int>;
using pll = pair<i64, i64>;
using ptx = pair<f64, f64>;

int main() {
#ifdef HOME
	freopen("cf.in", "r", stdin);
	freopen("cf.out", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	vector<bool> v;
	string a, b;
	int n, ant(0);

	cin >> n >> a >> b;
	for (int i = 1; i < n; ++i) if (a[i] != b[i]) {
		if (a[i] == b[i - 1] && a[i - 1] == b[i]) {
			swap(a[i], a[i - 1]);
			ant+= 1; } }

	v.resize(n);
	for (int i = 0; i < a.size(); ++i)
		v[i] = a[i] ^ b[i];

	for (int i = 0; i < n; ++i)
		if (v[i])
			ant+= 1;

	cout << ant << endl;

	return 0; }

