#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false)
#define ll long long int
#define mod 1000000007
ll mul(ll a,ll b){
	return ((a%mod)*(b%mod))%mod;
}
ll add(ll a,ll b){
	return ((a%mod)+(b%mod))%mod;
}
ll sub(ll a,ll b){
	return ((a%mod)-(b%mod)+mod)%mod;
}
ll fast_expo(ll a,ll n){
	if(n ==0){
		return 1;
	}
	else if(n ==1){
		return a%mod;
	}
	else{
		ll r = fast_expo(a,n/2);
		if(n%2 ==0){
			return mul(r,r);
		}
		else{
			return mul(mul(r,a),r);
		}
	}
}
ll inv(ll a){
	return fast_expo(a,mod-2);
}
ll root(ll x) {
	ll l = 0, r = 1e9 + 1;
	while (l < r - 1) {
		ll m = (l + r) / 2;
		if (m * m > x)
			r = m;
		else
			l = m;
	}
	return l;
}
ll calcsum(ll num){
	ll countt = 0;
	while(num){
		countt = countt+num%10;
		num = num/10;
	}
	return countt;
}
int main()
{
	speed;
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);	
    	freopen("output.txt", "w", stdout);
	#endif	 
	vector<ll> vec;
	for(int i=1;i<=11000000;i++){
		if(calcsum(i) ==10){
			vec.push_back(i);
			//	cout<<i<<" ";
		}
	}
	int k;
	cin>>k;
	cout<<vec[k-1];
	return 0;
 	}