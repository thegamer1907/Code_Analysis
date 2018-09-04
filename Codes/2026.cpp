#include <bits/stdc++.h>

using namespace std;

#define rep(i, a, b)	for (int i(a); i <= (b); ++i)
#define dec(i, a, b)	for (int i(a); i >= (b); --i)
#define MP		make_pair
#define fi		first
#define se		second


typedef long long LL;

const int N = 2e5 + 10;

map <LL, LL> mp1, mp2;
int n;
LL k;
LL a[N];
LL ans = 0;

int main(){

	scanf("%d%lld", &n, &k);
	rep(i, 1, n) scanf("%lld", a + i);
	rep(i, 1, n) mp2[a[i]]++;
	rep(i, 1, n){
		mp2[a[i]]--;
		if (a[i] % k == 0) ans += mp1[a[i] / k] * mp2[a[i] * k];
		mp1[a[i]]++;
	}

	printf("%lld\n", ans);
	return 0;
}


