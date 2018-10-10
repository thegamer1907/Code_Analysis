#include "bits/stdc++.h"
using namespace std;

const int N = 2e5 + 5;
int in[N];
map<long long, int> L, R;

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i = 1; i <= n; ++i) {
		scanf("%d", &in[i]);
		R[in[i]]++;
	}
	long long res = 0;
	for(int i = 1; i <= n; ++i) {
		R[in[i]]--;
		if(in[i] % k == 0) res += L[in[i] / k] * 1LL * R[1LL * in[i] * k];
		L[in[i]]++;
	}
	printf("%lld\n", res);
}