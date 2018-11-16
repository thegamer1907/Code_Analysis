#include <bits/stdc++.h>
using namespace std;
#define f(i, x, n) for (int i = x; i < (int)(n); ++i)
#define ll long long

int const N = 10000000, md = 1e9 + 7;
int dp[N][2];

int main(){
	int n;
	scanf("%d", &n);
	dp[0][0] = 1;
	for (int i = 0; i < n; ++i){
		dp[i + 1][1] = (dp[i + 1][1] + dp[i][0] * 3ll) % md;
		dp[i + 1][0] = (dp[i + 1][0] + dp[i][1]) % md;
		dp[i + 1][1] = (dp[i + 1][1] + dp[i][1] * 2ll) % md;
	}
	printf("%d\n", dp[n][0]);
}