#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include<cstring>

using namespace std;

const long long INF = 1e15 + 10;

const int M = 1e5 + 10;
long long x[M], h[M], dp[M][2];

int main() {

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> x[i] >> h[i];
	}

	memset(dp, 0, sizeof dp);

	x[0] = -INF;
	x[N+1] = INF; 

	for (int i = 1; i <= N; i++) {

		dp[i][0] = max(dp[i-1][0], dp[i-1][1]);

		if (x[i] - h[i] > (x[i-1])) {
			dp[i][0] = max(dp[i][0], dp[i-1][0] + 1);
		}

		if (x[i] - h[i] > (x[i-1] + h[i-1])) {
			dp[i][0] = max(dp[i][0], dp[i-1][1] + 1);
		}

		if (x[i] + h[i] < x[i+1]) {
			dp[i][1] = 1 +  max(dp[i-1][1], dp[i-1][0]);
		} else {
			dp[i][1] = -INF;
		}
	}

	cout << max(dp[N][0], dp[N][1]) << "\n";
	return 0;
	
}