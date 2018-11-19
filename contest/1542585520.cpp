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
	double h, m, s, t1, t2;
	int cnt = 0;
	cin >> h >> m >> s >> t1 >> t2;
	if (m || s)
		h += 0.5;
	if (s)
		m += 0.5;
	m /= 5;
	s /= 5;
	if (t1 < t2)
		swap(t1, t2);
	if (t2 < h&&h < t1)
		cnt++;
	if (t2 < m&&m < t1)
		cnt++;
	if (t2 < s&&s < t1)
		cnt++;
	if (!cnt || cnt == 3)
		cout << "YES";
	else
		cout << "NO";
}