#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ALL(x) x.begin(),x.end()
#define SZ(x) x.size()
#define PB push_back
#define F first
#define S second
typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PI;

const int N = 1e5 + 1;
int n, m, a[N], dp[N];
bool vis[N];

int main() {
	io;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	dp[n - 1] = 1;
	vis[a[n - 1]] = 1;
	for (int i = n - 2; i >= 0; i--) {
		dp[i] = (!vis[a[i]] ? dp[i + 1] + 1 : dp[i + 1]);
		vis[a[i]] = 1;
	}
	VI v;
	for (int i = 0; i < m; i++) {
		int q;
		cin >> q;
		cout << dp[q - 1] << "\n";
	}
}