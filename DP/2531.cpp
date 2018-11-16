#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; ++i) {
		scanf("%d", arr + i);
	}
	int dp[n];
	memset(dp, 0, sizeof dp);
	dp[0] = 1;
	int ans = 1;
	for(int i = 1; i < n; ++i) {
		if(arr[i] > arr[i - 1]) dp[i] = dp[i - 1] + 1;
		else dp[i] = 1;
		ans = max(ans, dp[i]);
	}
	printf("%d\n", ans);
}