#include <bits/stdc++.h>
using namespace std;
  
#define int long long
#define ld long double

const int INF = 1e18;
const int MAXN = 1e3 + 228;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int n, m, cnt = 0;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	vector <int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (abs(a[i] - b[j]) <= 1) {
				b[j] = INF;
				cnt++;
				break;
			}
		}
	}
	cout << cnt;
    return 0;
}