#include <iostream>

using namespace std;

#define ll long long int
ll search(ll low, ll high, ll n, ll k) {
	ll mid = (high + low) / 2ll;
	if(k < mid)
		return search(low, mid - 1, n - 1, k);
	if(k > mid)
		return search(mid + 1, high, n - 1, k);
	return n;
}
int main() {
	ll n, k;
	cin >> n >> k;
	ll size = 0;
	for(int i = 0; i < n; i++) {
		size = 2ll * size + 1ll;;
	}
	cout << search(1, size, n, k);
    return 0;
}