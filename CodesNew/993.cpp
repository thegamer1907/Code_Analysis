///By Tigrasha
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	int cnt = 0;
	map <string , bool> M;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) { string x; cin >> x; M[x] = true; }
	for (int i = 1; i <= m; ++i) { string x; cin >> x; if (M[x]) cnt++;}
	n -= cnt; m -= cnt;
	if (cnt & 1) { if (m > n) cout << "NO"; else cout << "YES"; }
	else {if (n > m) cout << "YES"; else cout << "NO";}
	return 0;
}