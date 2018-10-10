#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define MOD 1000000007

using namespace std;
typedef long long int ll;

ll f(ll k, ll n, ll m){
    ll ret = 0;
    for (int i = 1; i <= n; ++i){
        ret = ret + min(m, k/i);
    }
    return ret;
}

int main(void){
	fast;
	ll n, m, k; cin >> n >> m >> k;
	ll l = 1, r = n*m;
	while (l < r){
	    ll mid = (l+r)/2;
	    if (f(mid, n, m) < k) l = mid+1;
	    else r = mid;
	}
	cout << l << '\n';
}