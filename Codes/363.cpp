#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// In the great name of whorizon

vector<ll> v;
bool is(ll x){
	ll ret = 0;
	while (x){
		ret += (x%10);
		x /= 10;
	}
	return ret == 10;
}
int main(){
	ll k; cin>>k;
	for (int i=18;i<=1e8;i++){
		if (v.size() == k) break;
		if (is(i)) v.push_back(i);
	}
	cout<<v.back()<<endl;
	return 0;
}
