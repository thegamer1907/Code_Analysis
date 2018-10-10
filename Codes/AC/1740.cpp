#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll n, m, k;

bool check(ll x){
	ll t = 0;
	for(ll i = 1; i <= n; i++){
		t += min(x / i, m);
	}
	return t < k;
}
ll bin(ll l, ll r){
	if(l == r) return r;
	ll mid = (l + r) / 2;
	if(check(mid)){
		return bin(mid + 1, r);
	} else{
		return bin(l, mid);
	}
}

int main(){
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	ios_base::sync_with_stdio(false);
    cin >> n >> m >> k;
    cout << bin(1LL, n * m);
}
