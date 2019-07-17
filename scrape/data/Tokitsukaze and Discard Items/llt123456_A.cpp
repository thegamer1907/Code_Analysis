#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
vector<ll>v;
const int maxn = 1e5 + 11;
int main() {
	ll n, m, k, sum,l=0;
	ll ans = 0, num = 0, fend, chu;
	scanf("%lld%lld%lld", &n, &m, &k);
	for (int i = 1; i <= m; i++) {
		scanf("%lld", &sum);
		v.push_back(sum);
	}
	sort(v.begin(), v.end());
	while (l!=v.size()) {
		ll x = v[l] - num;
		if (x%k == 0) chu = x / k;
		else chu = x / k + 1;
		fend = chu * k;
		int pos = lower_bound(v.begin(), v.end(), fend + num+1) - v.begin()-l;
        
		++ans;
		num += pos;
		l+=pos;
	}
	printf("%lld\n", ans);
}