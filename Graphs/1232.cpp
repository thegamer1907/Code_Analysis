#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,t;
	cin>>n>>t;
	ll a[n-1];
	for(ll i=0;i<n-1;i++) cin>>a[i];
	ll x=1;
	while(1){
		if(x>=t) break;
		x=x+a[x-1];
	}
	if(x==t) cout<<"YES";
	else cout<<"NO";
	return 0;
}