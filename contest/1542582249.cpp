#include <bits/stdc++.h>

using namespace std;

int c [50];
int main () {

	int n,k;
	scanf("%d%d",&n,&k);

	for (int i = 0; i < n; i++) {
		int nm = 0;
		for (int j = 0; j < k; j++) {
			int t;
			scanf("%d",&t);
			t ^= 1;
			if (t) nm += (1<<j);
		}
		c[nm]++;
	}
	bool res = c[(1<<k)-1];
	for (int i = 0; i < (1<<k); i++) {
		for (int j = i; j < (1<<k); j++) {
			if ((i|j) != (1<<k)-1) continue;
			c[i]--,c[j]--;
			res = res||(c[i] >= 0 && c[j] >= 0);
			c[i]++,c[j]++;
		}
	}
	puts(res ? "YES" : "NO");
}
