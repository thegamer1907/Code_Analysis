/*
	Copyright: razouq (c)
	Author: Anass BENDARSI
	Date: 12/08/2018 22:31:15
	flamers will **** you
*/
//#include<flamers.h>

#include "bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define ll long long
#define ull unsigned long long
#define F first
#define S second
#define PB push_back
#define POB pop_back

using namespace std;

int main(){
//	freopen("input.in", "r", stdin);
//	freopen("output.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie();
	int n, m;
	cin>>n>>m;
	int dp[n], mp[100006], arr[n];
	memset(dp, 0, sizeof dp);
	memset(mp, 0, sizeof mp);
	for(int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	dp[n-1] = 1;
	mp[arr[n-1]] ++;
	for(int i = n-2; i >= 0; i--) {
		dp[i] = dp[i+1];
		if(!mp[arr[i]]) {
			dp[i] ++;
			mp[arr[i]] ++;
		}
	}
	int x;
	while(m--) {
		cin>>x;
		cout<<dp[x-1]<<endl;
	}
	return 0;
}
