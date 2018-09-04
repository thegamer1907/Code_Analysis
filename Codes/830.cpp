#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int solve(ll left, ll right, ll need, int sz) {
	ll mid = (left+right)/2;
	if (mid == need)
		return sz;
	if (need > mid)
		return solve(mid+1,right,need,sz-1);
	return solve(left,mid-1,need,sz-1);
}

int main() {
	ios::sync_with_stdio(false);
	int i,n;
	ll k,sz;
	cin >> n >> k;
	sz = ((ll)1 << n) - 1;
	cout << solve(1,sz,k,n) << endl;
}