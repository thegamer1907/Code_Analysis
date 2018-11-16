#include<bits/stdc++.h>
using namespace std;
int a[110];
int dp[110][110];
int n; 
int solve(int i, int j){
	if(i>=n || j >= n) return 0;
	if(dp[i][j]) return dp[i][j];
	int suma = 0;
	for(int k = 0; k < n; k++){
		suma += (k>= i && k <= j)? a[k]^1 : a[k];	
	}
	suma = max(suma,solve(i,j+1));
	suma = max(suma,solve(i+1,i+1));
	return dp[i][j] = suma;
	
}

int main(){
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	cout << solve(0,0) << "\n";
	
	
	return 0;	
}
