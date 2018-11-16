#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin>>n>>m;
	int arr[n], q[m], dp[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	for(int i=0; i<m; i++) cin>>q[i];
	unordered_set<int> s; 
	s.insert(arr[n-1]);
	dp[n-1] = 1;
	for(int i=n-2; i>=0; i--){
		if(s.find(arr[i])!=s.end()){
			dp[i] = dp[i+1];
		}
		else{
			dp[i] = dp[i+1] + 1;
		}
		s.insert(arr[i]);
	}
	for(int i=0; i<m; i++){
		cout<<dp[q[i]-1]<<endl;
	}
	return 0;
}
