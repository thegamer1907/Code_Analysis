#include <bits/stdc++.h>

#define ff first
#define ss second
#define mp make_pair
#define LIM 10000000

using namespace std;

typedef long long ll;

int lp[LIM+5], cnt[LIM+5];

void sieve(int lim) {
	for(int i = 2; i <= lim; i++)
		if(lp[i] == 0) {
			lp[i] = i;
			for(ll j = (ll)i*i; j <= lim; j+=i)
				lp[j] = i;
		}
}

int main() {
	int n,m;

	sieve(LIM);

	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		while(num > 1) {
			int aux = lp[num];
			cnt[aux]++;
			while(num%aux == 0)
				num /= aux;
		}
	}

	for(int i = 2; i <= LIM; i++)
		cnt[i] += cnt[i-1];

	scanf("%d", &m);

	while(m--) {
		int l,r;
		scanf("%d%d", &l, &r);
		l = min(l, LIM);
		r = min(r, LIM);
		printf("%d\n", cnt[r]-cnt[l-1]);
	}

	return 0;
}