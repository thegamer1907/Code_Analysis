#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> a;
ll fun(ll k){
	vector<ll> b;
	for(ll i = 0 ; i < a.size(); i++)
		b.push_back(a[i] + (i + 1) * k);

	sort(b.begin(), b.end());
	ll x = 0;
	for(int i = 0 ; i < k; i++)
		x += b[i];
	return x;
}
int main(){

	ll n, S;
	cin >> n >> S;
	ll x;
	for(ll i = 0 ; i < n ; i++){
		cin >> x;
		a.push_back(x);
	}
	int l = 1, r = n, mid;
	while(l <= r){
		mid = (l + r) / 2;
		if(fun(mid) <= S)
			l = mid + 1;
		else
			r = mid - 1;
	}
	cout << r << " " << fun(r)<< endl;
}
