#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios_base::sync_with_stdio(false);
	ll n;
	cin>>n;
	ll s[n];
	ll c[n];
	for(ll i=0;i<n;i++){
		cin>>s[i];
	}
	for(ll i=0;i<n;i++){
		cin>>c[i];
	}
	vector<ll> dp(n,-1);
	ll res=-1;
	for(ll i=1;i<n;i++){
		for(ll j=0;j<i;j++){
			if(s[j]>=s[i]) continue;
			if(dp[i]==-1 || dp[i]>c[i]+c[j]){
				dp[i]=c[i]+c[j];
			}
			if(dp[j]!=-1){
				if(res==-1) res=dp[j]+c[i];
				res=min(res,dp[j]+c[i]);
			}
		}
	}
	cout<<res<<endl;
	return 0;
}