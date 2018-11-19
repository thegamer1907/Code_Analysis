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

	char a, b;
	int n;
	cin >> a >> b >> n;
	bool l = 0, r = 0;
	forn(i, n){
		char x, y;
		cin >> x >> y;
		if (x == b) r = 1;
		if (y == a) l = 1;
		if (x == a && y == b){
			cout << "YES";
			return 0;
		}
	}
	if (l && r) cout << "YES";
	else cout << "NO";
	return 0;
}