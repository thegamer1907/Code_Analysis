#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
typedef long long LL;

int cnt[3600 * 12 * 3];

int main()
{
	int h, m, s, t1, t2;
	while (~scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2)) {
		memset(cnt, 0, sizeof(cnt));
		int P = 3600 * 12;
		if (h == 12) h = 0;
		h = h * 3600 + m * 60 + s;
		m = 720 * m + 12 * s;
		s = 720 * s;
		//printf("%d %d %d\n", h, m, s);
		cnt[h]++; cnt[m]++; cnt[s]++;
		cnt[h + P]++; cnt[m + P]++; cnt[s + P]++;
		for (int i = 1; i <= P * 2 + 5; i++) cnt[i] = cnt[i - 1] + cnt[i];
		if (t1 == 12) t1 = 0; if (t2 == 12) t2 = 0;
		bool flag = false;
		if (cnt[max(t1, t2) * 3600] - cnt[min(t1, t2) * 3600 - 1] == 0) flag = true;
		if (cnt[(min(t1, t2) + 12) * 3600] - cnt[max(t1, t2) * 3600 - 1] == 0) flag = true;
		if (flag) printf("YES\n"); else printf("NO\n");
	}
	return 0;
}