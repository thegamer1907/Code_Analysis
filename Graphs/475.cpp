#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	string s, u;
	cin >> n >> t >> s;
	u = s;
	while(t--) {
		u[0] = s[0];
		for(int i=1; i<n; i++) {
			if(s[i] == 'G' && s[i-1] == 'B') {
				u[i] = 'B';
				u[i-1] = 'G';
			} else {
				u[i] = s[i];
			}
		}
		s = u;
	}
	cout << s << endl;
	return 0;
}