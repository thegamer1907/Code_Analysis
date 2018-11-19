#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

int main() {

	string pass;
	cin >> pass;

	if(pass[0] >= 'A' && pass[0] <= 'Z') {
		pass[0] = ('a' + pass[0] - 'A');
	}

	if(pass[1] >= 'A' && pass[1] <= 'Z') {
		pass[1] = ('a' + pass[1] - 'A');
	}

	int n;
	cin >> n;

	string s[111];

	for(int i = 1; i <= n; i++) {
		cin >> s[i];
		if(s[i][1] >= 'A' && s[i][1] <= 'Z') {
			s[i][1] = ('a' + s[i][1] - 'A');
		}
		if(s[i][0] >= 'A' && s[i][0] <= 'Z') {
			s[i][0] = ('a' + s[i][0] - 'A');
		}
		if(s[i] == pass) {
			cout << "YES\n";
			return 0;
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {

			if(s[i][1] == pass[0] && s[j][0] == pass[1]) {
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";
	return 0;

}