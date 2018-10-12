#include <bits/stdc++.h>
using namespace std;
 
// user defined template
typedef long long ll;
#define MOD 1000000007
#define REP(i,a,n) for(ll i = a; i < n; i++)
#define ss string
#define INF 10004

ll n, qq;

int main() {
	// fast io
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// taking the input
	// freopen("input.txt", "r", stdin);
	
	cin >> n >> qq;
	vector<ll> v(n);
	ll q[qq] = {};
	for(int i = 0; i < n; i++) cin >> v[i];
	for(int i = 1; i < n; i++) v[i] += v[i-1];
	for(int i = 0; i < qq; i++) cin >> q[i];
	for(int i = 1; i < qq; i++) {
		if(q[i-1] >= v[n-1]) continue;
		q[i] += q[i-1];
	}

	for(int i = 0; i < qq; i++) {
		auto it = lower_bound(v.begin(), v.end(), q[i]);
		int idx = it - v.begin();
		// cout << "idx is : " << idx << " q[] " << q[i] << endl;
		if(idx >= n) cout << n << endl;
		else if(q[i] == v[idx]) {
			if(n-idx-1>0) cout << n - idx - 1 << endl;
			else cout << n << endl;
		}
		else cout << n - idx << endl;
	}

}
