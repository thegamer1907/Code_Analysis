#pragma comment(linker, "/STACK:1000000000")
#include <bits/stdc++.h>

using namespace std;

inline void solve();

//#define FILE

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifdef _DEBUG
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
	int t;
	cin >> t;
	while (t--) {
		auto time = clock();
		solve();
		printf("\n\n%f\n\n", 1.*(clock() - time) / CLOCKS_PER_SEC);
	}
#else
#ifdef FILE
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
#endif
	solve();
#endif
}

typedef long long ll;
typedef long double ld;
#define int ll
#define INF int(1e20)
#define MOD int(1e9+2015)
#define EPS 1e-14
#define N int(1e6+5)
#define M int(3e2+5)



void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	set<int> s;
	for (int i = 0, b; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b;
			a[i] += b*(1 << j);
		}
		s.insert(a[i]);
	}
	bool f = false;
	for (int i = 0; i < n; i++) {
		int mask = ~a[i];
		for (int mask2 = 0; mask2 < (1 << k); mask2++)
			if (s.find(mask&mask2) != s.end())
				f = true;
	}
	cout << (f ? "YES" : "NO");
}