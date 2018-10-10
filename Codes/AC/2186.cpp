#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5;
int n, a[N];
map<ll, int> sumAt;

int main(int argc, char **argv) {
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	ll cur = 0, res = 0;
	for (int i = 0; i < n; ++i) {
		cur += a[i];
		sumAt[cur] = i;
	}
	cur = 0;
	for (int i = n - 1; i >= 0; --i) {
		cur += a[i];
		map<ll, int>::iterator it = sumAt.find(cur);
		if (it != sumAt.end() && it->second < i)
			res = max(res, cur);
	}
	printf("%lld\n", res);
	return 0;
}
