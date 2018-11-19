#include<bits/stdc++.h>
using namespace std;

int main() {
	string s, str[110];
	cin >> s;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> str[i];
	}
	for(int i = 0; i < n; i++) {
		if(str[i] == s) {
			cout << "YES";
			return 0;
		}
		else if(str[i][0] == s[1]) {
			for(int j = 0; j < n; j++) {
				if(str[j][1] == s[0]) {
					cout << "YES";
					return 0;
				}
			}
		}
	}
	cout << "NO";
	return 0;
}
