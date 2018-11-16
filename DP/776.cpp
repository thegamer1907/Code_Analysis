#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[100000];
	int x;
	for(int i=1 ; i <= n ; i++){
		cin >> a[i];
		if(a[i] == 1){
			x = x + 1;
		}
	}
	int dp[100][100];
	int max = -1;
	for(int i = 1 ; i <= n ;i++){
		dp[i][i - 1] = x;	
		for(int j = i ; j <= n ; j++){
			dp[i][j] = dp[i][j - 1];
			if(a[j] == 1){
				dp[i][j] = dp[i][j] - 1;
			}else{
				dp[i][j] = dp[i][j] + 1;
			}
			if(dp[i][j] > max){
				max = dp[i][j];
			}
		}
	}
	cout << max;
	
	
	
	
	
	
	return 0;
}
