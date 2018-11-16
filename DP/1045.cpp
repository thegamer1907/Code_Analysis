#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[200];
ll dp[200];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	ll s=0;
	for(ll i=1;i<=n;i++){
		cin>>arr[i];
		if(arr[i]){
			s++;
		}
		dp[i]=s;
	}
	if(dp[n]==n){
		cout<<n-1;
		return 0;
	}
	if(n==1){
		if(arr[1]==0){
			cout<<1;
			return 0;
		}
	}
	ll ans=0;
	for(ll i=1;i<=n;i++){
//		cout<<dp[i]<<" ";
	}
//	cout<<endl;
	for(ll i=1;i<n;i++){
		for(ll j=i+1;j<=n;j++){
			ans=max(ans,j-i+1-2*(dp[j]-dp[i-1]));
		//	cout<<i<<" "<<j<<" "<<j-i+1-2*(dp[j]-dp[i-1])<<endl;
		}
	}
//	cout<<ans<<endl;
	cout<<dp[n]+ans;
	return 0;
}