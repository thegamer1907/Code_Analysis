#include <bits/stdc++.h>
using namespace std;

typedef long long lint; typedef pair<int, int> ii;
const int MOD = 1'000'000'007, MOD2 = 1'000'000'009;
const int INF = 0x3f3f3f3f; const lint BINF = 0x3f3f3f3f3f3f3f3fLL;

string s;
int n;
string t[105];

int solve(){
	cin >> s;
	cin >> n;
	for(int i=0;i<n;i++) cin >> t[i];
	for(int i=0;i<n;i++) for(int j=0;j<n;j++){
		string yay = t[i] + t[j];
		if(yay.find(s) != -1)
			return cout << "YES" << endl, 0;
	}
	cout << "NO" << endl;
    return 0;
}

int main(){
	ios::sync_with_stdio(0);
	// int t; cin >> t; while(t--)
	solve();
	// cout << (solve() ? "YES" : "NO") << endl;
	return 0;
}
