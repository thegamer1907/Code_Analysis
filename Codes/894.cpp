#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX = 1e5+5;
ll a[MX];
ll b[MX];
ll cuma[MX];
ll cumb[MX];
ll n,k;
bool ch(ll x){
	ll ret = 1e9;
	for(ll i=1;i<=n-x;i++){
		ret = min(ret,cuma[i+x]-cuma[i-1]);
	}
	for(ll i=1;i<=n-x;i++){
		ret = min(ret,cumb[i+x]-cumb[i-1]);
	}
	return (ret<=k);;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>k;
	string s; 
	cin>>s; 
	ll z = s.size();
	for(ll i=1;i<=z;i++){
		a[i] = (ll)(s[i-1]=='b');
		b[i] = 1ll-a[i];
		cuma[i] = cuma[i-1]+a[i];
		cumb[i] = cumb[i-1]+b[i];
	}
	ll st =0;
	ll en = z;
	while(st<=en){
		ll mid = (st+en)/2ll;
		if(ch(mid)){
			st = mid+1;
		}
		else{
			en = mid-1;
		}
	}
	cout<<st<<endl;
	return 0;
}
