// in the name of Allah
// and begin ... 

#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	char c, cc;
	cin >> c >> cc;
	int n;
	cin >> n;
	bool f1 = 0, f2 = 0;
	for(int i=0; i<n; i++) {
		string s;
		cin >> s;
		for(int i=0; i<s.size()-1; i++) {
			if(s[i] == c && s[i+1] == cc) {
				cout << "YES" << endl;
				return 0;
			}
		}
		if(s[0] == cc) f1 = 1;
		if(s[s.size()-1] == c) f2 = 1;
	}
	if(f1 && f2) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}