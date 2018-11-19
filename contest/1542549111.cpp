#include <bits/stdc++.h>

using namespace std;

string s[100];

int main() {
	
	string b;
	int n;
	cin >> b >> n;
	for(int i = 0; i < n; ++i) {
		cin >> s[i];
	}
	bool f1 = 0, f2 = 0;
	for(int i = 0; i < n; ++i) {
		if(s[i][1] == b[0]) {
			f1 = 1;
			break;
		}
	}
	for(int i = 0; i < n; ++i) {
		if(s[i][0] == b[1]) {
			f2 = 1;
			break;
		}
	}
	if(f1 && f2) {
		cout << "YES\n";
	}
	else {
		for(int i = 0; i < n; ++i) {
			if(s[i] == b) {
				cout << "YES\n";
				return 0;
			}
		}
		cout << "NO\n";
	}
	return 0;
}