#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define pii pair<long long, long long>
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define sz(a) (long long)a.size()
#define int long long

using namespace std;

const int MX = 1e6, INF = 7e18;

typedef vector<int> vint;
typedef string str;

vector<str> a;

main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		str s;
		cin >> s;
		a.pb(s);
	}
	for (int i = n - 2; i >= 0; --i) {
		if (a[i] <= a[i + 1]) continue;
		str t = ""; 
		int j = 0;
		while (a[i][j] == a[i + 1][j]) t += a[i][j], ++j;
		a[i] = t;
	}
	for (int i = 0; i < n; ++i)
		cout << a[i] << "\n";
}
