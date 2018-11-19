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
	vector<vector<unordered_set<string>>> arr(n, vector<unordered_set<string>>(km));
	vector<string> s(n), f(n); rep(i, n) {
		string str; cin >> str;
		s[i] = str.substr(0, km);
		f[i] = str.substr(max(sz(str) - km, 0), km);
		rep(j, km) rep(k, sz(str)-j) arr[i][j].insert(str.substr(k, j+1));
	}
	int m; cin >> m;
	rep(i, m) {
		int a, b; cin >> a >> b; a--; b--;
		s.push_back((s[a]+s[b]).substr(0, km)); 
		f.push_back((f[a]+f[b]).substr(max(sz(f[a] + f[b])-km, 0), km));
		arr.push_back(vector<unordered_set<string>>(km));
		string str = f[a] + s[b]; int res = 0;
		rep(j, km) {
			arr.back()[j].insert(arr[a][j].begin(), arr[a][j].end());
			arr.back()[j].insert(arr[b][j].begin(), arr[b][j].end());
			rep(k, sz(str) - j) arr.back()[j].insert(str.substr(k, j + 1));
			if (arr.back()[j].size() == (1 << (j + 1))) res = j + 1;
		}
		cout << res << endl;
	}
}
