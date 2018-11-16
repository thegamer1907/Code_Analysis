#include <bits/stdc++.h>

using namespace std;

const int N = 10010;

int c[N];
int p[N];

int main() {
	ios::sync_with_stdio(false);
	
	int ans = 1;
	int n; cin >> n;
	for (int i = 2; i <= n; i++) {
		cin >> p[i];
	}
	
	for (int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	
	for (int i = 2; i <= n; i++) {
		ans += c[i] != c[p[i]];
	}
	
	cout << ans << endl;
	
	return 0;
}
