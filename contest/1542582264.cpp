#include<bits/stdc++.h>
using namespace std;
int n, k;
int mp[16], t;
int main()
{
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		int ans = 0;
		for (int j = 0; j < k; j++) {
			scanf("%d", &t);
			ans = ans * 2 + t;
		}
		mp[ans]++;
	}
	int tot = (1 << k) - 1;
	if (mp[0]) {
		printf("YES\n");
		return 0;
	}
	int ok = 0;
	for (int i = 1; i <= tot&&ok == 0; i++) {
		int subset = tot - i;
		if (mp[i]) {
			for (int j = subset; j; j = (j - 1)&subset) {
				if (mp[j]) {
					ok = 1;
					break;
				}
			}
		}
	}
	if (ok)printf("YES\n");
	else printf("NO\n");
}