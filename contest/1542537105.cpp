#include <bits/stdc++.h>
using namespace std;
int main() {
	string s; int n;
	cin >> s >> n;
	int p1 = 0, p2 = 0;
	for(int i = 0; i < n; i ++) {
		string k; cin >> k;
		if(k == s) {
			cout << "YES";
			return 0;
		}
		if(k[0] == s[1]) p1 = 1;
		if(k[1] == s[0]) p2 =1;
	}
	if(p1&&p2) cout << "YES";
	else cout << "NO";
}