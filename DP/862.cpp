#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> a,o,z;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n;
	cin>>n;
	a.resize(n+1,0);
	o.resize(n+1,0);
	z.resize(n+1,0);
	for(ll i=1;i<=n;i++) cin>>a[i];
	for(ll i=1;i<=n;i++){
		if(a[i]){
			o[i]=o[i-1]+1;
			z[i]=z[i-1];
		}
		else{
			z[i]=z[i-1]+1;
			o[i]=o[i-1];
		}
	}
	
	//for(ll i=1;i<=n;i++) cout<<o[i]<<" ";
	//cout<<endl;
	//for(ll i=1;i<=n;i++) cout<<z[i]<<" ";
	//cout<<endl;
	ll A=o[n];
	ll ans=0;
	for(ll i=1;i<=n;i++){
		for(ll j=i;j<=n;j++)
			if(z[j]-z[i-1]>o[j]-o[i-1]) ans=max(ans,A+z[j]-z[i-1]-o[j]+o[i-1]);
	}
	if(ans==0) cout<<n-1<<endl;
	else cout<<ans<<endl;
	return 0;
}