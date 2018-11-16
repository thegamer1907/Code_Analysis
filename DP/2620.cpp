// in the name of Allah

#include <bits/stdc++.h>

#define endl '\n'
#define mod 1000000007
#define sz(x) ((int) (x.size()))

using namespace std;

int dp[101][101];

int memo(int a, int b) {
	if(min(a, b) < 1) return 0;
	if(a == 1 && b == 1) return 0;
	if(dp[a][b] != -1) return dp[a][b];
	return dp[a][b] = max(memo(a-2, b+1), memo(a+1, b-2))+1;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b;
	cin >> a >> b;
	memset(dp, -1, sizeof dp);
	cout << memo(a, b) << endl;
	return 0;
}