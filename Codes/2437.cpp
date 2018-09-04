#include <bits/stdc++.h>
#define N 10000001
using namespace std;
	
int p[N+1], b[N+1], f[N+1], n, temp, q, l, r;
vector <int> v;

void sieve () {
	for (int i = 2 ; i <= N ; i++) {
		if (!p[i]) {
			if (b[i]) f[i] += b[i];
			for (int j = 2*i ; j <= N ; j += i) {
				if (b[j]) f[i] += b[j];
				p[j] = 1;
			}
		}
	}
	for (int i = 2 ; i <= N ; i++) {
		if (!p[i]) v.push_back (i);
	}

	for (int i = 1 ; i <= N ; i++) {
		f[i] = f[i-1] + f[i];
		//if (i <= 10) cout << f[i] << " ";
	}
	//cout << endl;
}

int main () {
	scanf ("%d", &n);
	for (int i = 1 ; i <= n ; i++) {
		scanf ("%d", &temp);
		b[temp]++;
	}
	sieve();
	scanf ("%d", &q);
	while (q--) {
		scanf ("%d %d",&l,&r);
		l = min(l, N-1);
		r = min(r, N-1);
		printf ("%d\n", f[r] - f[l-1]);
	}

	return 0;
}
