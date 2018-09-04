#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define ll long long
int testsNumber = 1;
int K;
const int lungMax = 100;
int dp[lungMax][14];
void reset() {

}

void update(int &x, int y) {
	x += y;
}

int sum(int x) {
	int cat = 0;
	while (x) {
		cat += x % 10;
		x /= 10;
	}
	return cat;
}

void solve() {

	// dp[lung][j];
	for (int i = 1; i <= 9; ++i) {
		dp[1][i] = 1;
	}
	int lim = 9;
	for (int lung = 2; lung < lim; ++lung) {
		for (int cifra = 0; cifra < 9; ++cifra) {
			for (int sum = 1; sum <= 10; ++sum) {
				if (sum + cifra > 10) {
					continue;
				}
				update(dp[lung][sum + cifra], dp[lung - 1][sum]);
			}
		}
	}

	int cnt = 0;
	for (int i = 1; ; ++i) {
		if (sum(i) == 10) {
			++cnt;
			if (cnt == K) {
				cout << i << "\n";
				return;
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);
	//freopen("test.err", "w", stderr);
	// cin >> testsNumber;
#endif

	for (int currTest = 1; currTest <= testsNumber; ++currTest) {
		cin >> K;
		reset();
		solve();
	}

	return 0;
}