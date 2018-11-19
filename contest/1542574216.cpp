#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
#define forb(i, n) for (int i = n - 1; i >= 0; i--)
#define x first
#define y second

typedef long long ll;

vector<pair<double, double> > vertex;

int main() {
	#ifdef LOCAL
		freopen("input.in", "r+", stdin);
		freopen("output.out", "w+", stdout);
	#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	int c = t1;
	if (m < 5) m = 12 * 5;
	if (s < 5) s = 12 * 5;
	bool ok = 1;
	while (c != t2){
		ok &= c != h && c != m / 5 && c != s / 5;
		c++;
		if (c == 13) c = 1;
	}
	bool ok2 = 1;
	c = t1;
	while (c != t2){
		c--;
		if (c == 0) c = 12;
		ok2 &= c != h && c != m / 5 && c != s / 5;
	}
	if (ok || ok2) cout << "YES";
	else cout << "NO";
	return 0;
}