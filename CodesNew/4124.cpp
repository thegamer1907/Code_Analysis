#include<iostream>
#include<string.h>
#include<algorithm>
#include<cstdio>
#include<math.h>
#include<vector>
#include <stdlib.h>
#include<map>
#include<set>
#include<string>
#include<functional>
using namespace std;
typedef long long LL;
LL q,n, s[200010], k, i,now;

int main() {
	cin >> n >> q;
	now = 0;
	for (i = 0; i < n; i++) {
		scanf("%I64d", &k);
		now += k;
		s[i] = now;
	}
	now = 0;
	for (i = 0; i < q; i++) {
		scanf("%I64d", &k);
		now += k;
		LL pos = lower_bound(s, s + n, now)-s;
		if (pos >= n) {
			now = 0;
			printf("%d\n", n);
		}
		else {
			if (s[pos] > now)pos--;
			if (n - pos - 1 == 0) {
				now = 0;
				printf("%d\n", n);
			}
			else printf("%d\n", n - pos - 1);
		}
	}
}