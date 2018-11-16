#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n;
	int m;
	cin >> n >> m;
	vector<int> v(n);
	
	for( int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	bool arr[100001];
	int dp[100001] = {0};
	dp[n - 1] = 1;
	arr[v[n - 1]] = 1;
	for( int i = n - 2; i >= 0; i--){
		if( arr[v[i]] == 0){
			arr[v[i]] = 1;
			dp[i] = dp[i + 1] + 1;
		}else{
			dp[i] = dp[i + 1];
		}
	}
	int l;
	for( int i = 0; i < m; i++){
		cin >> l;
		cout << dp[l - 1] << endl;
	}
	return 0;
}