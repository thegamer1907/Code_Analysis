#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define mp make_pair
#define yes puts("YES")
#define no puts("NO")

const int INF = INT_MAX;
const int MAXN = (int) 1e5 + 5;
const int MOD = (int) 1e9 + 7;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	a--;
	b--;
	if (a > b) swap(a, b);
	int ans = 1;
	while (n != 2) {
		if (a / 2 == b / 2) {
			cout << ans;
			return;
		}
		n /= 2;
		a /= 2;
		b /= 2;
		ans++;
	}
	cout << "Final!";
}

int main() {
//	freopen("in.txt", "r", stdin);
	solve();
	return 0;
}
