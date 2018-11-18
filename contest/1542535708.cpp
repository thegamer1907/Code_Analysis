#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <cassert>
#include <stack> 
#include <bitset>

#define INFLL 2000000000000000000
#define INF 2000000000
#define MOD 1000000007
#define PI acos(-1.0)
#define MAXLEN 29

typedef std::pair <int, int> pii;
typedef long long ll;
typedef std::vector <ll> vll;

using namespace std;

int n, k;
int arr[100000];
ll dp[100001][21];
int cur;
int cnt[100001];
int mapl, mapr;
ll cost;

void solve(int l, int r, int optl, int optr) {
	if (l > r) return;
	int mid = (l + r) / 2;
	if (mid <= 1) {
		dp[mid][cur] = 0;
		solve(mid + 1, r, 1, optr);
		return;
	}
	int oo = optr;
	optr = min(mid - 1, optr);
	dp[mid][cur] = dp[mid][cur - 1];
	int xx = mid;
	if (mid <= mapr) {
		for (int i = mapr; i >= mid; i--) {
			cnt[arr[i]]--;
			cost -= cnt[arr[i]];
		}
	} else for (int i = mapr + 1; i < mid; i++) {
		cost += cnt[arr[i]];
		cnt[arr[i]]++;
	}
	mapr = mid - 1;
	if (mapl <= optr) {
		for (int i = mapl; i <= optr; i++) {
			cnt[arr[i]]--;
			cost -= cnt[arr[i]];
		}
	} else {
		for (int i = mapl; i > optr + 1; i--) {
			cost += cnt[arr[i]];
			cnt[arr[i]]++;
		}
	}
	mapl = optr + 1;
	/*cout << mid << " " << optl << " " << optr << endl;
	cout << "---" << endl << mapl << " " << mapr << " " << cost << endl;
	for (int i = 0; i < 8; i++) if (cnt[i] != 0) {
		cout << i << " " << cnt[i] << endl;
	}
	cout << "---" << endl;*/
	for (int i = optr; i >= optl; i--) {
		cost += cnt[arr[i]];
		cnt[arr[i]]++;
		mapl = i;
		if (dp[mid][cur] > dp[i][cur - 1] + cost) {
			dp[mid][cur] = dp[i][cur - 1] + cost;
			xx = i;
		}
	}
	//cout << dp[mid][cur] << " " << xx << endl << endl;
	solve(l, mid - 1, optl, xx);
	solve(mid + 1, r, xx, oo);
}

int main() {
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) scanf("%d", arr + i);
	for (int i = 0; i < n; i++) {
		dp[i + 1][1] = dp[i][1] + cnt[arr[i]];
		cnt[arr[i]]++;
	}
	cost = dp[n][1];
	mapl = 0;
	mapr = n - 1;
	for (cur = 2; cur <= k; cur++) {
		solve(1, n, 0, n);
		for (int j = 0; j < 100001; j++) cnt[j] = 0;
		cost = 0;
		mapl = 1;
		mapr = 0;
	//	cout << endl;
	}
	cout << dp[n][k] << endl;
	for (int i = 0; i < 500; i++) {
		for (int j = 0; j < 20; j++) dp[i][j] = 0;
		cnt[i] = 0;
	}
	return 0;
}
