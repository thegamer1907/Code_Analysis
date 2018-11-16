#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n, k;	cin>>n>>k;
	vector<ll>arr(n);
	for(ll i=0;i<n;i++	)	cin>>arr[i];
	ll x=arr[k-1];
	if(x<=0)	x=1;
	//cout<<x;
	ll ub=upper_bound(arr.begin(), arr.end(), x, greater<ll>())-arr.begin();
	cout<<ub<<endl;
}