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
string pfx(string str, int len) { return str.substr(max(sz(str)-len, 0), len); }

int main(int argc, char* argv[]) {
	const int km = 10;
	int n; cin>>n;
	vs prefix(n), postfix(n); vector<vector<us>> substrings(n, vector<us>(km+1));
	rep(i, n) {
		string str; cin>>str;
		prefix[i] = str.substr(0, km);
		postfix[i] = pfx(str, km);
		for (int l = 1; l<=km; ++l) for (int j = 0; j+l-1<sz(str); ++j) substrings[i][l].insert(str.substr(j, l));
	}
	int m; cin>>m;
	rep(i, m) {
		int a, b; cin>>a>>b; a--, b--;
		prefix.push_back((prefix[a]+prefix[b]).substr(0, km));
		postfix.push_back(pfx(postfix[a]+postfix[b], km));
		string str = postfix[a]+prefix[b];
		vector<us> absubstrings(km+1); int res = 0;
		for (int idx:{a, b}) rep(l, km+1) absubstrings[l].insert(substrings[idx][l].begin(), substrings[idx][l].end());
		for (int l = 1; l<=km; ++l) for (int j = 0; j+l-1<sz(str); ++j) absubstrings[l].insert(str.substr(j, l));
		substrings.push_back(absubstrings);
		for (int l = 1; l<=km; ++l) if (sz(absubstrings[l])==(1<<l)) res = l;
		cout<<res<<endl;
	}
}
