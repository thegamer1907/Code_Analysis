#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <ext/pb_ds/assoc_container.hpp>
#include <bitset>
#include <unordered_set>
#include <random>
using namespace std;
using namespace __gnu_pbds;
int A[100005];
long long dp[21][100005];
int cnt[100005];
int curL = 1, curR = 0;
long long val = 0;
void slide(int L, int R) {
	while(curR < R) {
		++curR;
		val += cnt[A[curR]];
		++cnt[A[curR]];
	}
	while(curL > L) {
		--curL;
		val += cnt[A[curL]];
		++cnt[A[curL]];
	}
	while(curR > R) {
		--cnt[A[curR]];
		val -= cnt[A[curR]];
		--curR;
	}
	while(curL < L) {
		--cnt[A[curL]];
		val -= cnt[A[curL]];
		++curL;
	}
}
void calc(int num, int l, int r, int kl, int kr) {
	if(l > r) return;
	int m = (l + r) / 2;
	kl = max(0, kl);

	dp[num][m] = 1e18;
	int k = -1;
	for(int i = kl; i <= min(m-1, kr); ++i) {
		slide(i+1, m);
		if(val + dp[num-1][i] < dp[num][m])
			dp[num][m] = val + dp[num-1][i], k = i;
	}
	calc(num, l, m-1, kl, k);
	calc(num, m+1, r, k, kr);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
	int n, k;
	cin >> n >> k;
	for(int i = 1; i <= n; ++i)
		cin >> A[i];
	for(int i = 1; i <= n; ++i)
		slide(1, i), dp[1][i] = val;
	for(int i = 2; i <= k; ++i)
		calc(i, 1, n, 1, n);
	cout << dp[k][n] << endl;
    return 0;
}
