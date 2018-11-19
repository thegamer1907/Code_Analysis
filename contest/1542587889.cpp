#include <bits/stdc++.h>
using namespace std;

int n, k, a[20];

int main()
{
	scanf("%d%d", &n, &k);

	for (int i=0; i<n; i++) {
		int t, now=0;
		for (int j=0; j<k; j++) {
			scanf("%d", &t);
			now = 2*now + t;
		}
		a[now]++;
	}

	for (int i=0; i<(1<<k); i++) if (a[i]) {
		for (int j=0; j<(1<<k); j++) if (a[j]) {
			if (!(i&j)) {
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
}
