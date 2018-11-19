#include <bits/stdc++.h>
using namespace std;

int main() {
	string pass;
	int n;
	cin>>pass>>n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin>>s[i];
	}
	for (int i = 0; i < n; i++) {
		if (s[i].compare(pass) == 0 || (s[i][0] == pass[1] && s[i][1] == pass[0])) {
			cout<<"YES\n";
			return 0;
		}
		for (int j = i+1; j < n; j++) {
			if ((s[j][0] == pass[1] && s[i][1] == pass[0]) || (s[j][1] == pass[0] && s[i][0] == pass[1])) {
				cout<<"YES\n";
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}