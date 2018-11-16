#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(), a.end()
#define sz(a) (int)a.size()

typedef vector<int> vint;
typedef long double ld;
typedef long long ll;
typedef string str;

const int MX = 1e6;

main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, a, b;
	cin >> n >> a >> b;
	vint v(n);
	for (int i = 0; i < n; ++i)
		v[i] = i + 1;
	int num = 0;
	while (sz(v) >= 2) {
		vint g;
		++num;
		for (int i = 0; i < sz(v) - 1; i += 2) {
			if (v[i] == a) {
				if (v[i + 1] == b)
					return cout << ((1 << num) == n ? "Final!" : to_string(num)), 0;
				else
					g.pb(a);
			}
			else if (v[i + 1] == a) {
				if (v[i] == b)
					return cout << ((1 << num) == n ? "Final!" : to_string(num)), 0;
				else
					g.pb(a);
			}
			else if (v[i] == b) {
				if (v[i + 1] == a)
					return cout << ((1 << num) == n ? "Final!" : to_string(num)), 0;
				else
					g.pb(b);
			}
			else if (v[i + 1] == b) {
				if (v[i] == a)
					return cout << ((1 << num) == n ? "Final!" : to_string(num)), 0;
				else
					g.pb(b);
			}
			else
				g.pb(v[i]);
		}
		v = g;
	}
	cout << num;	
}
