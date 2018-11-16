#include<bits/stdc++.h>
using namespace std;

int const N = 1e6;
int dp[N];

int main () {
	int n = 0, m, l = 0, r = 0;
	string s;
	cin >> s >> m;
	n = s.size();
	for (int i = 1; i < n; i++) {
		dp[i] = dp[i - 1];
		if(s[i] == s[i - 1])
			dp[i]++;
	}
	while (m-- > 0){
		cin >> l >> r;
		l--;
		r--;
		cout << dp[r] - dp[l] << "\n";
	}
	return 0;
}
