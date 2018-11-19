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

const int km = 10;
int main() {
	int n; cin >> n;
	vector<string> pref(n), post(n); 
	vector<vector<unordered_set<string>>> subs(n, vector<unordered_set<string>>(km + 1));
	rep(i, n) {
		string str; cin >> str;
		pref[i] = str.substr(0, km);
		post[i] = str.substr(max(0, sz(str)-km), km);
		for (int k = 1; k <= km; ++k) rep(j, sz(str)-k+1) subs[i][k].insert(str.substr(j, k));
	}
	int m; cin >> m;
	rep(i, m) {
		int ai, bi; cin >> ai >> bi; ai--; bi--;
		pref.push_back((pref[ai] + pref[bi]).substr(0, km));
		post.push_back((post[ai] + post[bi]).substr(max(0, sz(post[ai] + post[bi]) - km), km));
		subs.push_back(vector<unordered_set<string>>(km+1));
		string str = post[ai] + pref[bi]; int res = 0;
		for (int k = 1; k <= km; ++k) {
			subs.back()[k].insert(subs[ai][k].begin(), subs[ai][k].end());
			subs.back()[k].insert(subs[bi][k].begin(), subs[bi][k].end());
			rep(j, sz(str) - k + 1) subs.back()[k].insert(str.substr(j, k));
			if (sz(subs.back()[k]) == (1 << k)) res = k;
		}
		cout << res << endl;
	}
}
