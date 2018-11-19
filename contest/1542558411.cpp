#include <bits/stdc++.h>
using namespace std;

string a;

int main() {
	int n; cin >> a >> n;
	vector<string> b(n);
	for(int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	bool ans = false;
	for(int i = 0; i < n; ++i) {
		if(a == b[i]) ans = true;
	}
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			if(a[0] == b[i][1] and a[1] == b[j][0]) { 
				ans = true;
			}
		}
	}
	cout << (ans ? "YES\n" : "NO\n") << endl;
}
