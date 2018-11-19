#include <bits/stdc++.h>

using namespace std;

string s[111], t;
int n;

int main () {
    cin >> t >> n;
	string p = t;
//	reverse(all(p));
	for (int i = 1; i <= n; i ++) {
		cin >> s[i];
		if(s[i] == t) {
			cout << "YES";
			exit(0);
		}
		if(s[i][0] == t[0] && s[i][1] == t[1]) {
			cout << "YES";
			exit(0);
		}
	}

	for (int i = 1; i <= n; i ++) {
		for (int j = 1; j <= n; j ++) {
	//		if(i == j) continue;
			if(s[i][1] == t[0] && t[1] == s[j][0]) {
				cout << "YES";
				exit(0);
			}
		}
	}

	cout << "NO";
}