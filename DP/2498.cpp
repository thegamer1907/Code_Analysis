#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <bitset>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, i, j, k, best;
	cin >> n;
	vector<int> a(n), dp(n, 1);
	best = 1;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		if ((i > 0) && (a[i] > a[i - 1])) dp[i] = dp[i - 1] + 1;
		best = max(best, dp[i]);
	}
	cout << best << "\n";

	return 0;
}
