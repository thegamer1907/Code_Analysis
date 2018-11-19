#undef NDEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<ii> vii;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define repd(i, n) for(int i = n-1; i >= 0; --i)
#define sz(x) (int)(x).size()

int main() {
	int n, k; cin >> n >> k;
	set<int> p;
	rep(i, n) {
		int b, q = 0; rep(j, k) cin >> b, q *= 2, q += b;
		p.insert(q);
	}

	if (p.count(0) > 0) { cout << "YES\n"; return 0; }
	bool res = false;
	for (int pi : p) for (int pj : p) res |= ((pi&pj) == 0);
	cout << (res ? "YES\n" : "NO\n");
}
