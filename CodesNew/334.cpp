#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[100005];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n,t;
	cin>>n>>t;
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	ll a=0,b=0;
	ll r=1;
	ll s=arr[0];
	ll ans;
	if(s<=t) ans=1; else ans=0;
	while(b!=n-1){
		if(s<t){
			b++;
			s+=arr[b];
			r++;
		}else{
			s-=arr[a];
			a++;
			r--;
		}
		if(s<=t) ans=max(ans,r);
	//	cout<<ans<<" "<<s<<endl;
	}
	cout<<ans;
	return 0;
}