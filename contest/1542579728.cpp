#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
const int MaxN = (1 << 16);
using namespace std;

int tot = 0, n, m;
int sta[MaxN + 5];
int cnt[10];
bool sum[MaxN + 5];
bool check(int s) {
	for (int i = 1; i <= 4; i++) cnt[i] = 0;
	for (int i = 0; i < 16; i++) {
		if((1 << i) & s) {
			int now = i;
			for (int t = 1; t <= 4; t++) {
				if(now & 1) cnt[t]++;
					else cnt[t]--;
				now >>= 1;
			}
		}
	}
	for (int i = 1; i <= 4; i++) if(cnt[i] > 0) return false;
	return true;
}
void Init() {
	for (int i = 1; i < (1 << 16); i++) {
		if(check(i)) sta[++tot] = i;
	} 
}

void Solve() {
	memset(sum, 0, sizeof(sum));
	for (int i = 1; i <= n; i++) {
		int now = 0;
		for (int j = 1; j <= m; j++) {
			int t ;
			scanf("%d", &t);
			now = now * 2 + t;
		}
		sum[now] = true;
	}
	bool ok = true;
	for (int i = 1; i <= tot; i++) {
		ok = true;
		for (int j = 0; j < 16; j++) {
			if((1 << j) & sta[i]) {
				if(sum[j] == false) ok = false;
			}
		}
		if(ok) break;
	}
	if(ok) printf("YES\n");
	else printf("NO\n");
}
int main() 
{
	Init();
	while(~scanf("%d%d", &n, &m)) {
		Solve();
	}
}