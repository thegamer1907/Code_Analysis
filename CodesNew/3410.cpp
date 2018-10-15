#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios_base::sync_with_stdio(false);
	ll n,m;
	cin>>n>>m;
	ll a[n];
	for(ll i=0;i<n;i++){cin>>a[i];}
	ll t=0;
	for(ll i=0;i<n;i++){
		t=max(t,a[i]);
	}
	ll q=t+m;
	ll cur=0;
	for(ll i=0;i<n;i++){
		cur+=t-a[i];
	}
	ll p=t;
	cur=m-cur;
	if(cur>0){
		p+=cur/n;
		if(cur%n!=0) p++;
	}
	cout<<p<<' '<<q<<endl;
	return 0;
}