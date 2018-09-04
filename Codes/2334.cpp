#include <bits/stdc++.h>
#define len(o) ((int)(o).size())
#define get(o, i) get<i>(o)
#define x first
#define y second
using namespace std;

const int X = 1e7 + 10;

int cnt[X];
long long f[X];
bool not_prime[X];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		cnt[x]++;
	}
	for(int i = 2; i <= 1e7; i++){
		f[i] = f[i - 1];
		if(not_prime[i]) continue;
		for(int j = i; j <= 1e7; j += i){
			f[i] += cnt[j];
			not_prime[j] = true;
		}
	}
	int m;
	scanf("%d", &m);
	while(m--){
		int l, r;
		scanf("%d %d", &l, &r);
		printf("%lld\n", (l <= 1e7)? f[min(r, (int)1e7)] - f[l - 1] : 0);
	}
	return 0;
}
