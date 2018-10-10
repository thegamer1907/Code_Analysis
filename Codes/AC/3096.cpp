#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define endl '\n'
#define MAX

typedef long long ll;
typedef pair<ll, ll> pii;
//typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int n;
	cin >> n;
	vector<pii> a;
	for(ll i = 1; i <= n; i++){
		ll x;
		cin >> x;
		ll lo = 0;
		ll hi = x;
		ll ans = -1;
		while(lo <= hi){
			ll m = (lo + hi) >> 1LL;
			if(i + m * n > x){
				ans = m;
				hi = m - 1;
			}
			else
				lo = m + 1;
		}
		a.push_back({ans * n + i, i});
	}
	sort(a.begin(), a.end());
	cout << a[0].second << endl;
	
	return 0;
}