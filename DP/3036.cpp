/* In the name of Allah */
#include <bits/stdc++.h>
using namespace std;

const int P = 1e9 + 7;

pair<int, int> solve(int n) {
	if (!n)
		return {1, 0};
	pair<int, int> ans = solve(n / 2);
	int a = ans.first, b = ans.second;
	ans = {(1LL * a * a + 3LL * b * b) % P, 2LL * b * (a + b) % P};
	if (n & 1)
		a = ans.first, b = ans.second, ans = {3LL * b % P, (a + 2LL * b) % P};
	return ans;
}

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

	int n;
	cin >> n, cout << solve(n).first << endl;

	return 0;
}
