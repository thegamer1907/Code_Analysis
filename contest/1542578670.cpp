#include <bits/stdc++.h>
using namespace std;

typedef long long lint; typedef pair<int, int> ii;
const int MOD = 1'000'000'007, MOD2 = 1'000'000'009;
const int INF = 0x3f3f3f3f; const lint BINF = 0x3f3f3f3f3f3f3f3fLL;

int n, m;
set<string> st[205][205];
string s[205];

int check(int i, int len){
	if(len == 0) return 1;
	return st[i][len].size() >= (1LL << len);
}

int solve(){
	cin >> n;
	for(int i=0;i<n;i++) cin >> s[i];
	for(int i=0;i<n;i++){
		for(size_t lo=0;lo<s[i].size();lo++)
			for(size_t hi=lo;hi<s[i].size();hi++){
				int len = hi - lo + 1;
				if(len > 20) break;
				st[i][len].insert(s[i].substr(lo, len));
			}
	}
	cin >> m;
	for(int i=0;i<m;i++){
		int l, r; cin >> l >> r; l--, r--;
		s[n+i] = s[l] + s[r];
		if(s[n+i].size() > 200){
			string fst = s[n+i].substr(0, 100);
			string sec = s[n+i].substr(s[n+i].size() - 100);
			s[n+i] = fst + '@' + sec;
		}
		for(int ll=0;ll<=20;ll++) for(string x: st[l][ll]) st[n+i][ll].insert(x);
		for(int ll=0;ll<=20;ll++) for(string x: st[r][ll]) st[n+i][ll].insert(x);
		for(size_t lo=0;lo<s[n+i].size();lo++)
			for(size_t hi=lo;hi<s[n+i].size();hi++){
				int len = hi - lo + 1;
				if(len > 20) break;
				string tmp = s[n+i].substr(lo, len);
				if(tmp.find('@') == -1)
					st[n+i][len].insert(s[n+i].substr(lo, len));
			}
		int ans = 0;
		while(check(n + i, ans)) ans++;
		cout << ans - 1 << endl;
	}
    return 0;
}

int main(){
	ios::sync_with_stdio(0);
	// int t; cin >> t; while(t--)
	solve();
	// cout << (solve() ? "YES" : "NO") << endl;
	return 0;
}
