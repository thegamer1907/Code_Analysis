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

typedef vector<string> vs;
typedef unordered_set<string> us;
string substr(string str, int idx, int len) { return str.substr(idx >= 0 ? idx : max(sz(str)+idx, 0), len); }
void collect(us& set, string str, int len) {
	for (int j = 0; j+len-1<sz(str); ++j) set.insert(str.substr(j, len));
}

int main(int argc, char* argv[]) {
	const int km = 10;
	int n; cin>>n;
	vs prefix(n), postfix(n); vector<vector<us>> substrings(n, vector<us>(km+1));
	rep(i, n) {
		string str; cin>>str;
		prefix[i] = substr(str, 0, km);
		postfix[i] = substr(str, -km, km);
		for (int l = 1; l<=km; ++l) collect(substrings[i][l], str, l);
	}
	int m; cin>>m;
	rep(i, m) {
		int a, b; cin>>a>>b; a--, b--;
		prefix.push_back(substr(prefix[a]+prefix[b], 0, km));
		postfix.push_back(substr(postfix[a]+postfix[b], -km, km));
		string str = postfix[a]+prefix[b];
		vector<us> absubstrings(km+1); int res = 0;
		for (int idx:{a, b}) rep(l, km+1) absubstrings[l].insert(substrings[idx][l].begin(), substrings[idx][l].end());
		for (int l = 1; l<=km; ++l) collect(absubstrings[l], str, l), res = (sz(absubstrings[l])==(1<<l)) ? l : res;
		substrings.push_back(absubstrings);
		cout<<res<<endl;
	}
}
