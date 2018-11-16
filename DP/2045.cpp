#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , m ;
	 cin>>n>>m;
	 int dp[n];
	 vector<int> arr(n);
	 map<int,int> mp;
	 for( int i = 0; i<n ; ++i)cin>>arr[i];
	 reverse(arr.begin(),arr.end());
	 mp[arr[0]]=1;
	 dp[0]=1;
	 for( int i = 1 ; i < n ; ++i ){
	 	if(arr[i]!= arr[i-1] && mp[arr[i]] != 1){
	 		mp[arr[i]]=1;
	 		dp[i]=dp[i-1]+1;
	 	}
	 	else dp[i]=dp[i-1];
	 }
	 int num ;
	 for( int i = 0 ; i < m ; ++i ){
	 	cin>>num;
	 	cout<<dp[n-num]<<"\n";
	 }
	 
	return 0;
}