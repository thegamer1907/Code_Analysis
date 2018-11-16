#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define N 100006

int main(){
	int t,k,a,b,ans;
	cin>>t>>k;
	ll dp[N];
	dp[0]=1;
	for(int i=1;i<N;i++){
		if(i-k>=0) dp[i] = dp[i-k]+dp[i-1];
		else dp[i] = dp[i-1];
		if(dp[i]>=MOD) dp[i]-=MOD;
	}
	for(int i=2;i<N;i++) {
		dp[i] = (dp[i]+dp[i-1])%MOD;
	}
	dp[0]=0;
	while(t--){
		cin>>a>>b;
		ans = dp[b]-dp[a-1]+MOD;
		cout<<ans%MOD<<"\n";
	}
}