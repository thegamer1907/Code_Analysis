#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define MOD 1000000007

using namespace std;
typedef long long int ll;

int main(void){
	fast;
	int n; cin >> n;
	ll a[n];
	for (int i = 0; i < n; ++i) cin >> a[i];
	map<ll, int> count;
	ll total = 0;
	for (int i = n-1; i >= 0; --i){
	    total += a[i];
	    ++count[total];
	}
	if (total%3 != 0){
	    cout << 0 << '\n';
	    return 0;
	}
	ll cur = 0, val = total/3, ans = 0;
	for (int i = 0; i < n-2; ++i){
	    cur += a[i];
	    total -= a[i];
	    --count[total];
	    if (val == cur){
	        if (val == 0 and count[val] > 0) ans += count[val] - 1;
	        else ans += count[val];
	    }
	}
	cout << ans << '\n';
}