#include<bits/stdc++.h>
using namespace std;
bool ok[17];
int n, m;
int main(){
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i ++){
		int s = 0;
		for (int j = 1; j <= m; j ++){
			int tmp; scanf("%d", &tmp);
			s = (s << 1) + tmp;
		}
		ok[s] = 1;
	}
	for (int i = 0; i < (1 <<16); i ++){
		int tot = 0, a = 0, b = 0, c = 0, d = 0;
		for (int j = 0; j < 16; j ++) if ((1 << j) & i){
			if (!ok[j]){
				tot = -1; break;
			}
			a += j & 1;
			b += (j & 2) / 2;
			c += (j & 4) / 4;
			d += (j & 8) / 8;
			tot ++;
		}
		if (tot == -1 || !tot) continue;
		if (a * 2 <= tot && b * 2 <= tot && c * 2 <= tot && d * 2 <= tot)
			return puts("YES"), 0;
	}
	return puts("NO"), 0;
}