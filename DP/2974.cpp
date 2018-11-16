#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100'000;
const long long INF = 1000'000'000LL * 1000'000LL + 1;

int n;
long long cost[MAX_N];
string s[MAX_N];

long long dp[MAX_N][2];

long long minimizeAndCutOff(long long x, long long y) {
	return min(INF, min(x, y));
}

string safeReverse(const string &s) {
	string temp = s;
	reverse(temp.begin(), temp.end());
	return temp;
}

string calcPrevious(const string &s, bool isReversed) {
	return isReversed ? safeReverse(s) : s;
}

long long solve(int ind, bool prevIsReversed) {
	if (ind == n)
		return 0;
		
	long long &ret = dp[ind][prevIsReversed];
	if (ret != -1)
		return ret;
	
	// Extracted into a function because I once wrote `s[ind]` in one of the `?` branches
	string prev = calcPrevious(s[ind - 1], prevIsReversed);
	
	ret = INF;
	if (s[ind] >= prev)
		ret = minimizeAndCutOff(ret, solve(ind + 1, false));	// Yup, min unneeded here.
	if (safeReverse(s[ind]) >= prev)
		ret = minimizeAndCutOff(ret, solve(ind + 1, true) + cost[ind]);
		
	return ret;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> cost[i];
	for (int i = 0; i < n; ++i) cin >> s[i];
	
	memset(dp, -1, sizeof(dp));
	
	assert(n >= 1);
	const long long ans = minimizeAndCutOff(solve(1, false), solve(1, true) + cost[0]);
	if (ans == INF)
		cout << "-1";
	else
	  cout << ans;
	
	// Debugging
	// cout << endl;
	// for (int i = 1; i < n; ++i)
	// 	cout << i << " " << solve(i, false) << " " << solve(i, true) + cost[i] << endl;
	return 0;
}