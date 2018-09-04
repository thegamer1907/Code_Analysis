#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repp(i, a, b) for (int i = a; i < b; i++)
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
typedef long long ll;
typedef long double db;
typedef pair<int, int> pii;
int main() {
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	vector<int> v(n);
	rep(i, n) cin >> v[i];
	const int N = 1e7 + 10;
	vector<bool> prime(N, true);
	vector<int> cnt(N);
	rep(i, n) cnt[v[i]]++;
	vector<int> f(N);
	repp(i, 2, N) {
		if (!prime[i]) continue;
		for (int j = i; j < N; j += i) {
			f[i] += cnt[j];
			prime[j] = false;
		}
	}
	repp(i, 1, N) f[i] += f[i - 1];
	int m;
	cin >> m;
	while (m--) {
		int a, b;
		cin >> a >> b;
		b = min(b, N - 3);
		a = min(a, N - 3);
		cout << f[b] - f[a - 1] << "\n";
	}
}