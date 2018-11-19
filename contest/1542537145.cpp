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
#define sz(x) (int)x.size()

int main() {
	int n, k; cin >> n >> k;
	set<int> set;
	rep(j, n) { int d = 0, s = 0; rep(i, k) cin >> d, s = s * 2 + d;  set.insert(s); }
	bool res = 0;
	for (int si : set) for (int sj : set) res |= !(si & sj);
	cout << (res ? "YES" : "NO") << endl;
}
