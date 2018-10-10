#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 10001000;
ll arr[N], acc[N];
bool p[N];
void sieve() {
	for(int i = 2; i < N; ++i) {
		if(p[i])continue;
		acc[i] += arr[i];
		for(int j = i + i; j < N; j += i)
			p[j] = 1, acc[i] += arr[j];
	}
	for(int i = 2; i < N; ++i)
		acc[i] += acc[i - 1];
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
	int n, m;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int t;
		scanf("%d", &t);
		arr[t]++;
	}
	cin >> m;
	sieve();
	while(m--) {
		int l, r;
		scanf("%d %d", &l, &r);
		if(l >= N){ printf("0\n"); continue; }
		if(r >= N) r = N - 1;
		printf("%lld\n", acc[r] - acc[l - 1]);
	}

}
