#include<iostream>

int c[103], n;
int dp[103][3];
int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &c[i]);
	}
	if (c[0]){
		dp[0][0] = 1;
		dp[0][1] = 0;
		dp[0][2] = -1;
	} else {
		dp[0][0] = 0;
		dp[0][1] = 1;
		dp[0][2] = -1;
	}
	for (int i = 1; i < n; i++){
		if (c[i]){
			dp[i][0] = dp[i-1][0] + 1;
			dp[i][1] = std::max(dp[i-1][1], dp[i-1][0]);
			dp[i][2] = std::max(dp[i-1][1], dp[i-1][2]) + 1;
		} else {
			dp[i][0] = dp[i-1][0];
			dp[i][1] = std::max(dp[i-1][1], dp[i-1][0]) + 1;
			dp[i][2] = std::max(dp[i-1][1], dp[i-1][2]);
		}
	}
	printf("%d\n", std::max(dp[n-1][2], dp[n-1][1]));
	return 0;
}