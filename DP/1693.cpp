#include <bits/stdc++.h>

using namespace std;

string s;

bool checab(string s) {
	bool owowo, uwuwu;
	owowo = uwuwu = false;
	for (int i = 1; i < s.length(); i++) {
		if (s[i-1] == 'A' && s[i] == 'B') {
			s[i-1] = '1';
			s[i] = '2';
			owowo = true;
			break;
		}
	}
	for (int i = 1; i < s.length(); i++) {
		if (s[i-1] == 'B' && s[i] == 'A') {
			s[i-1] = '1';
			s[i] = '2';
			uwuwu = true;
			break;
		}
	}
	return owowo & uwuwu;
}

bool checba(string s) {
	bool owowo, uwuwu;
	owowo = uwuwu = false;
	for (int i = 1; i < s.length(); i++) {
		if (s[i-1] == 'B' && s[i] == 'A') {
			s[i-1] = '1';
			s[i] = '2';
			owowo = true;
			break;
		}
	}
	for (int i = 1; i < s.length(); i++) {
		if (s[i-1] == 'A' && s[i] == 'B') {
			s[i-1] = '1';
			s[i] = '2';
			uwuwu = true;
			break;
		}
	}
	return owowo & uwuwu;
}

signed main() {
	cin >> s;
	if (checab(s) || checba(s)) {
		cout << "YES";
	}
	else cout << "NO";
}