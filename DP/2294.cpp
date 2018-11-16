#include <bits/stdc++.h>
using namespace std;
int a[100005];
int dp[100005];
int h[100005];
int n , m , b , c ;


int main() {
	
	cin>> n >> m ;
	for(int i = 0 ; i < n ; i++ ){
		cin >> a[i];
	}
	h[a[n-1]]++;
	dp[n-1] = 1;
	for(int i = n-2 ; i >= 0 ; i--){
		if(h[a[i]] > 0 ){
			dp[i] = dp[i+1];
		}
		else{
			h[a[i]]++;
			dp[i] = 1 + dp[i+1];
		}
	}
	while(m--){
		int l ;
		cin >> l ;
		cout<<dp[l-1]<<endl;
	}
	return 0;
}