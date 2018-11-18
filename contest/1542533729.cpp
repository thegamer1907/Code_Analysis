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

const int km = 10;

int add(vector<unordered_set<string>>& substrings, string str) {
	int res = 0;
	rep(k, km) {
		rep(i, sz(str)) if (i + k <= sz(str)) {
			substrings[k].insert(str.substr(i, k));
		}
		if (sz(substrings[k]) == (1 << k)) res = k;
	}
	return res;
}

int main() {
	int n; cin >> n;
	vector<vector<unordered_set<string>>> substrings(n, vector<unordered_set<string>>(km));
	vector<string> prefix(n), postfix(n);
	rep(i, n) {
		string s; cin >> s;
		add(substrings[i], s);
		prefix[i] = s.substr(0, km);
		postfix[i] = s.substr(max(0, sz(s)-km), km);
	}
	int m; cin >> m;
	rep(i, m) {
		int ai, bi; cin >> ai >> bi; ai--, bi--;
		prefix.push_back((prefix[ai] + prefix[bi]).substr(0, km));
		postfix.push_back((postfix[ai] + postfix[bi]).substr(max(0, sz(postfix[ai] + postfix[bi])-km), km));
		vector<unordered_set<string>> ab(km);
		rep(j, km) ab[j].insert(substrings[ai][j].begin(), substrings[ai][j].end());
		rep(j, km) ab[j].insert(substrings[bi][j].begin(), substrings[bi][j].end());
		int res = add(ab, postfix[ai] + prefix[bi]);
		cout << res << endl;
		substrings.push_back(ab);
	}
}
