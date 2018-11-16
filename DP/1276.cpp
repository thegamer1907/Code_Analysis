#include<bits/stdc++.h>
using namespace std;
int a[110];
int dp[110][110];
int n,tot; 
int solve(int i, int j){
	if(i>=n || j >= n) return 0;
	if(dp[i][j]) return dp[i][j];
	int s,l,acu;
	acu = !i? a[j] : a[j]-a[i-1];
	l = !i? j+1 : j-(i-1);
	s = (tot-acu) + (l-acu);
	s = max(s,solve(i,j+1));
	s = max(s,solve(i+1,i+1));
	
	return dp[i][j] = s;
	
}

int main(){
	cin >> n; int x;
	cin >> x; a[0] = x;
	for(int i = 1; i < n; i++){
		cin >> x;
		a[i] = x? a[i-1]+1 : a[i-1];
	}
	tot = a[n-1];
	cout << solve(0,0) << "\n";
	
	
	return 0;	
}
