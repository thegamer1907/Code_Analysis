#pragma comment(linker, "/STACK:1000000000")
#include <bits/stdc++.h>

using namespace std;

inline void solve();

//#define FILE

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifdef _DEBUG
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
	int t;
	cin >> t;
	while (t--) {
		auto time = clock();
		solve();
		printf("\n\n%f\n\n", 1.*(clock() - time) / CLOCKS_PER_SEC);
	}
#else
#ifdef FILE
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
#endif
	solve();
#endif
}

typedef long long ll;
typedef long double ld;
#define int ll
#define INF int(1e20)
#define MOD int(1e9+2015)
#define EPS 1e-14
#define N int(1e6+5)
#define M int(3e2+5)
string abc = "abcdefghijklmnopqrstuvwxyz";
string ABC = "ABCDEFGHIJKLMNOPQaRSTUVWXYZ";
string digits = "0123456789";



void solve() {
	string s, b;
	cin >> s;
	int n;
	cin >> n;
	string a[105];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == s) {
			cout << "YES";
			return;
		}
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (1) {
				string c;
				c += a[i][1];
				c += a[j][0];
				if (c == s) {
					cout << "YES";
					return;
				}
				
			}
		}
	cout << "NO";
}