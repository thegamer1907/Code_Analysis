#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <cmath>
using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0);
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;



ll N;
bool chk(ll n,ll mid) {
	ll ret = 0;
	while (n) {
		ll k = min(n, mid);
		n -= k;
		if(n>=10) n -= n / 10;
		ret += k;
		if (n <= 0) break;
	}
	return 2 * ret >= N;
}
int main() {
	scanf("%lld", &N);
	ll l = 0, r = 1e18 + 3;
	while (l + 1 < r) {
		ll mid = l + r >> 1;
		if (chk(N,mid)) r = mid;
		else l = mid;
	}
	printf("%lld", r);
}

