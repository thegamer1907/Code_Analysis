#include <bits/stdc++.h>

using namespace std;

#define up(i,j,n)		for (int i = j; i <= n; i++)
#define bin(i)		(1 << (i))

const int MAXN = 1e5 + 5;

int N, K, a[MAXN];
bool vis[MAXN];

int main(){
	scanf("%d%d", &N, &K);
	up (i, 1, N) {
		up (j, 1, K) {
			int o;
			scanf("%d", &o);
			a[i] = (a[i] << 1 | o); 
		}
		vis[a[i]] = 1;
	}
	up (s1, 0, bin(4) - 1) if (vis[s1]) up (s2, 0, bin(4) - 1) if (vis[s2])
		if ((s1 | s2) == (s1 ^ s2)) {
			puts("YES");
			return 0;
		}
	puts("NO");
	return 0;
}
