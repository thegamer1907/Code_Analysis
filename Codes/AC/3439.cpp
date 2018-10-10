#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define endl '\n'
#define MAX

typedef long long ll;
typedef pair<int,int> pii;
//typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;

bool ok(ll k, ll n){
	ll sum = 0;
	ll num = n;
	while(num > 0){
		ll cant = min(num, k);
		sum += cant;
		num -= cant;
		num -= num / 10;
	}
	return sum * 2 >= n;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	ll n;
	cin >> n;
	ll lo = 1;
	ll hi = n;
	ll ans = -1;
	while(lo <= hi){
		ll m = (lo + hi) >> 1LL;
		if(ok(m, n)){
			ans = m;
			hi = m - 1;
		}
		else
			lo = m + 1;
	}
	
	cout << ans << endl;

	return 0;
}