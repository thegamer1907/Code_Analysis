#include <bits/stdc++.h>
using namespace std;
#define FOR(index, start, end) for(int index = start; index < end; ++index)
#define RFOR(index, start, end) for(int index = start; index > end; --index)
#define FOREACH(itr, b) for(auto itr = b.begin(); itr != b.end(); ++itr)
#define RFOREACH(itr, b) for(auto itr = b.rbegin(); itr != b.rend(); ++itr)
#define db(x) cerr << #x << " = " << x << endl
#define db2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl
#define db3(x, y, z) cerr << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << endl
#define INF 1000000000
#define M 1000000007
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

//---------------------------------------------------------------------------------------------------------------
int dp[100005][3];
int x[100005];
int h[100005];

int main() {
	int n;
	cin >> n;
	FOR(i, 0, n) {
		scanf("%d%d", &x[i], &h[i]);
	}
	if (n == 1) {
		cout << 1 << endl;
		return 0;
	}
	dp[0][0] = 1;
	dp[0][1] = (x[0] + h[0] < x[1] ? 1 : 0);
	FOR(i, 1, n - 1) {
		dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
		if (x[i] - h[i] > x[i - 1]) {
			dp[i][0] = max(dp[i][0], dp[i - 1][0] + 1);
		}
		if (x[i - 1] + h[i - 1] < x[i] - h[i]) {
			dp[i][0] = max(dp[i][0], dp[i - 1][1] + 1);
		}
		if (x[i] + h[i] < x[i + 1]) {
			dp[i][1] = max(dp[i - 1][0], dp[i - 1][1]) + 1;
		}
	}
	cout << max(dp[n - 2][0], dp[n - 2][1]) + 1 << endl;
}

