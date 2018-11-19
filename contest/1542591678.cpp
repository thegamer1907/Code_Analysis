#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,a,b) for(ll i=a;i <= b;i++)
#define rep(i,n) for(ll i=0;i < n;i++)
#define sz(x) x.size()
#define accuracy  ll precision = numeric_limits<double>::digits10
#define fast_io ios_base::sync_with_stdio(false)
#define N 105

string t[N];

int main() {
	fast_io;
	accuracy;
	string s; cin >> s;
	int n; cin >> n;
	bool fou = false;
	fr(i,1,n) {
		cin >> t[i];
		if(t[i] == s) fou = true;
	}
	if(!fou) {
		fr(i,1,n) {
			if(fou) break;
			if(t[i][1] == s[0]) {
				fr(j,1,n) {
					if(t[j][0] == s[1]) {
						fou = true;
						break;
					}
				}
			}
		}	
	}
	if(fou) cout << "YES\n";
	else cout << "NO\n";
}