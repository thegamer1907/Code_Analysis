#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ret(x) cout<<x<<endl; 
ll MOD=1e9+7;

int main(){
	ios_base::sync_with_stdio(0);
	ll n,t;
	cin>>n>>t;
	ll a[n];
	for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}	
	ll l=1,r=n,prev=0,ans=0;
	while(l<=r){
// 		cout<<l<<" "<<r<<" ";
		ll m=(l+r)/2;
		vector<ll>v(n);
		for (ll i = 0; i < n; ++i)
		{
			v[i]=a[i]+(i+1)*m;
		}
		sort(v.begin(),v.end());
		ll f=0;
		for(int i=0;i<m;++i){
			f+=v[i];
		}
// 		cout<<f<<endl;
		if(f<=t){
			prev=m;
			ans=f;
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	cout<<prev<<" "<<ans<<endl;

	return 0;
}