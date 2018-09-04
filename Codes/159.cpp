#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+1;

int n, m, a[N], q[N], s[N];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		s[i] = s[i-1] + a[i];
	}
	cin >> m;
	for(int i = 1; i <= m; i++) {
		cin >> q[i];
		int l = 1, r = n;
		while(l < r) {
			int mid = l+r >> 1;
			if(q[i] <= s[mid]) r = mid;
			else l = mid+1;
		}
		cout << l << '\n';
	}
}
