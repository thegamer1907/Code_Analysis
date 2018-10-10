#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

const int inf = 0x3c3c3c3c;
const ll infl = 0x3c3c3c3c3c3c3c3c;

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	ll n, m, k;
	cin >> n >> m >> k;
	ll left = 0, right = 1e12;
	while(left + 1 < right){
		ll mid = (left + right) / 2;
		ll sum = 0;
		for(int i = 1; i <= n; i++){
			int v = min(mid / i, m);
			sum += v;
		}
		if(sum < k) left = mid;
		else right = mid;
	}
	printf("%lld", right);
	return 0;
}