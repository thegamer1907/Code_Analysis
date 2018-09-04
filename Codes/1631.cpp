/*input
3 11
2 3 5
*/


#include <bits/stdc++.h>

using namespace std;

#define st first
#define nd second
typedef long long ll;
typedef pair<ll, ll> pp;
const ll N = 100010;
ll n, S, a[N], K, sum;
vector<pp> V;

bool cmp(pp a, pp b) {
	return a.st + a.nd * K < b.st + b.nd * K;
}

bool check(ll k) {
	K = k, sum = 0;
	sort(V.begin(), V.end(), cmp);
	for(int i=0; i<K; i++) {
		ll t = V[i].st + V[i].nd * K;
		if(sum + t > S) return false;
		sum += t;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>S;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		V.push_back(pp(a[i], i));
	}
	ll l = -1, r = n + 1, mid;
	while(r - l > 1) {
		mid = (l + r) / 2;
		if(check(mid)) l = mid;
		else r = mid;
	}
	check(l);
	cout<<l<<" "<<sum;
	return 0;
}