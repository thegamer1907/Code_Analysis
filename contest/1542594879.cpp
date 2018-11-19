#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

string s[100];

int main() {
	ios_base::sync_with_stdio(0);
	string t; int n, ok = 0;
	cin >> t >> n;
	for (int i=0;i<n;i++) {
		cin >> s[i];
		if (s[i]==t) ok = 1;
	}
	for (int i=0;i<n;i++) for (int j=0;j<n;j++) {
		string tt = s[i]+s[j];
		if (tt.find(t)!=-1) ok = 1;
	}
	cout << (ok? "YES\n": "NO\n");
}