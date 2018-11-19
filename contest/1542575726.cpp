#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;
const int maxn = 1e5;
int n, k, a, flag;
struct NOOD {
	bool vis[5];
	int cnt;
}num[maxn + 5];
bool f[maxn + 5];
int main() {
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= k; j++) {
			scanf("%d", &a);
			num[i].cnt += a;
			num[i].vis[j] = a;
		}
	}
	bool pan = 0;
	bool p[5][5];
	memset(p, 0, sizeof(p));
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= k; j++) {
			if(k != 4) {
				if(num[i].cnt == 0)flag = 1;
				else if(num[i].cnt == 1) {
					pan = 1;
					if(num[i].vis[j] == 0)f[j] = 1;
				}
			}
			else {
				if(num[i].cnt == 0)flag = 1;
				else if(num[i].cnt == 1){
					pan = 1;
					if(num[i].vis[j] == 0)f[j] = 1;
				}
				else if(num[i].cnt == 2) {
					int y = 0;
					for(int s = 1; s <= k; s++)
					if(num[i].vis[s]) {
						if(!y)y = s;
						else p[s][y] = 1, p[y][s] = 1;
					}
					if((p[1][2] && p[3][4]) || (p[1][3] && p[2][4]) || (p[1][4] && p[2][3]))flag = 1;
				}
			}
		}
	}
	if(pan) {
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= k; j++) {
				if(num[i].vis[j] == 0)f[j] = 1;
			}
		}
	}
	bool ok = 1;
	for(int s = 1; s <= k; s++)if(f[s] == 0)ok = 0;
	if(ok)flag = 1;
	if(flag)printf("YES\n");
	else printf("NO\n");
	return 0;
}