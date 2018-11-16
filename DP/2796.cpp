#include <bits/stdc++.h>
//#include "util.h"
using namespace std;

#define sz(x) (int)(x).size()
#define F first
#define S second
#define mpa make_pair
#define pb emplace_back

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector< pii > vii;
typedef vector< vi > vvi;

template<typename c> void smax(c &x, c y) { x = max(x, y); }
template<typename c> void smin(c &x, c y) { x = min(x, y); }

string s;
bool check(vi &v) { for (auto x : v) if (x>0) return true; return false; }
vi go() {
	vi ret;
	for (auto &x : s) {
		if (x == '0')
			ret.pb(0);
		else {
			x--;
			ret.pb(1);
		}
	}
	return ret;
}
void print(vi &v) {
	int i = 0;
	for (; i < sz(v) && !v[i]; i++);
	for (; i < sz(v); i++)
		cout << v[i];
	cout << ' ';
}
vector<vi> ans;
int32_t main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> s;
	for (int i = 0; i < 9; i++)
		ans.pb(go());
	while (sz(ans) && !check(ans.back()))
		ans.pop_back();
	cout << sz(ans) << endl;
	for (auto x : ans)
		print(x);
	cout << endl;
	return 0;
}
