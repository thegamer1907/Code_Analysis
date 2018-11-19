#include <cstdio>
using namespace std;
#include <string>
#include <cstring>
int cnt[100];
int tmpcnt[100];
int n, k;

bool check(int s) {
	memset(tmpcnt, 0, sizeof(tmpcnt));
	int tot = 0;
	for (int i=0; i < k*k; i++) {
		if (s & (1 << i)) {
			// printf("in i == %d\n",i);
			if (!cnt[i])
				return false;
			tot++;
			for (int j=0; j<k; j++) {
				tmpcnt[j] += (i & (1<<j)) > 0;
			}
			// printf("tmp %d %d %d\n", tmpcnt[0], tmpcnt[1], tmpcnt[2]);
		}
	}
	// puts("here");
	// printf("tmp %d %d %d\n", tmpcnt[0], tmpcnt[1], tmpcnt[2]);
	for (int i=0; i<k; i++) {
		if (tmpcnt[i] > tot / 2)
			return false;
	}
	return true;
}
int main() {

	scanf("%d%d", &n, &k);
	for (int i=1; i<=n; i++) {
		int base = 0, tmp = 0;
		scanf("%d", &base);
		for (int j=1; j<k; j++) {
			scanf("%d", &tmp);
			base = base * 2 + tmp;
		}
		cnt[base]++;

	}
for (int i=0; i< (1<<k); i++) {
	// printf("cnt[%d] == %d\n",i,cnt[i]);
}

	bool flag = cnt[0] > 0;
	// if (cnt[0]) flag = true;

	// if (k == 1) {
	// 	if (cnt[0])
	// 		flag = true;
	// }
	// if (k == 2) {
	// 	if (cnt[1] && cnt[2])
	// 		flag = true;
	// }
	// if (k == 3) {
	// 	int tmp = 0;
	// 	tmp = (cnt[1]>0) + (cnt[2]>0) + (cnt[4]>0);
	// 	if (tmp >=2)
	// 		flag = true;
	// 	flag = flag || (cnt[1] && cnt[6]) || (cnt[2]&&cnt[5]) || (cnt[4] && cnt[3]);
	// }
	// if (k == 4) {
	// 	int tmp = 0;
	// 	tmp = (cnt[1]>0) + (cnt[2]>0) + (cnt[4]>0) + (cnt[8]);
	// 	if (tmp >=2)
	// 		flag = true;


	// }
	for (int s = 1; s < (1<<(k*k)); s++) {
		if (check(s)) {
			flag = true;
			// printf("check == true for %d\n", s);
		}
	}
	// printf("check == %d\n", check(6));
	puts(flag ? "YES" : "NO");
	return 0;
}