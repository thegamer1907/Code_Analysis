#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios_base::sync_with_stdio(false);
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll res=1; ll temp=1;
	for(ll i=1;i<n;i++){
		res=max(res,temp);
		if(a[i]>a[i-1]){temp++;}
		else { temp=1;}
	}
	res=max(res,temp);
	cout<<res<<endl;
	return 0;
}