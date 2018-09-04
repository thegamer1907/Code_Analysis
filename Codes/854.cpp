#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define MOD                 1000000007LL
#define EPS                 1e-9
#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAXN = 1e5+5;

ll solve(ll l, ll r, ll k, ll alpha){
	ll mid = (l + r) >> 1;
	// cout << mid << " " << k << endl;
	if(mid > k){
		solve(l, mid - 1, k, alpha - 1);
	}else if(mid < k){
		solve(mid + 1, r, k, alpha - 1);
	}else
		return alpha;
}

int main(){
	io;
	ll n, k;
	cin >> n >> k;
	ll tot = 1;
	for(int i = 1;i <= n-1; i++){
		tot = tot * 2LL + 1;
	}
	cout << solve(1, tot, k, n);
	return 0;
}