#include <bits/stdc++.h>
#define endl '\n'
typedef long long LL;
const int SZ = 1e5 + 2;
const LL mod = 1e9 + 7, inf = 1e18;
using namespace std;

string t[102];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	string s; cin >> s;
	int n; cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> t[i];
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			for(int k = 1; k <= n; k++) {
				string tmp = t[i] + t[j] + t[k];
				size_t f = tmp.find(s);
				if(f != string::npos) {
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
