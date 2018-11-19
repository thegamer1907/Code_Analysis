#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define f(i, x, n) for(int i = x; i < (int)n; ++i)

bool g[1 << 4];

void win() { printf("YES\n"), exit(0); }

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	f(i, 0, n){
		int x = 0;
		f(j, 0, k){
			int t;
			scanf("%d", &t);
			x = x << 1 | t;
		}
		g[x] = true;
	}
	if (g[0])win();
	f(i, 0, 1 << k)if (g[i])f(j, 0, 1 << k)if (g[j] && !(i & j))win();
	printf("NO\n");
}