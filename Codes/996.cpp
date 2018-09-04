#include<bits/stdc++.h>
using namespace std;

#define all(C) C.begin(),C.end()
typedef long long int Long;
typedef long double Double;
const int MAXN = 1e5 + 5;

char s[MAXN];
int n, k, prea[MAXN];

int SA(int l, int r) {
	return prea[r] - prea[l - 1];
}
int SB(int l, int r) {
	return (r - l + 1) - SA(l, r);
}

bool check(int len) {
	for(int start = 0; start + len <= n; ++start) {
		int l = start;
		int r = start + len - 1;

		if(SA(l + 1, r + 1) <= k) return true;
		if(SB(l + 1, r + 1) <= k) return true;
	}

	return false;
}

int main() {
	scanf("%d%d%s", &n, &k, s + 1);

	memset(prea, 0, sizeof(prea));
	for(int i = 1; i <= n; ++i)
		prea[i] = prea[i - 1] + (s[i] == 'a' ? 1 : 0);

	int lo = 1, hi = n, mid, ans = 1;
	while(lo <= hi) {
		mid = (lo + hi) / 2;

		if(check(mid)) {
			ans = mid;
			lo = mid + 1;
		} else {
			hi = mid - 1;
		}
	}

	printf("%d\n", ans);
	return 0;
}