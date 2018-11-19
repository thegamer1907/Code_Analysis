#include <bits/stdc++.h>

using namespace std;

const int N = 1e2 + 10;

int n;

string a[N];

string s;

int main () {
	cin >> s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (a[i][0] == s[0] && a[i][1] == s[1]) return cout << "YES", 0;
		for (int j = 1; j <= n; j++) {
			if (a[i][1] == s[0] && a[j][0] == s[1]) return cout << "YES", 0;
		}
	}
	cout << "NO";
    return 0;
}
