#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <stack>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef double DB;

int n, k;
int vis[105];

int main()
{
	scanf("%d%d", &n, &k);
	memset(vis, 0, sizeof(vis));
	for(int i = 1; i <= n; i++) {
		int p = 0;
		for(int j = 1; j <= k; j++) {
			int x;
			scanf("%d", &x);
			p *= 2, p += x;
		}
		vis[p] = 1;
	}
	bool ok = 0;
	if(vis[0]) ok = 1;
	else {
		for(int i = 1; i < (1 << k); i++)
			if(vis[i]) {
				for(int j = 1; j < (1 << k); j++)
					if(vis[j]) {
						if((i & j) == 0) ok = 1;
					}
			}
	}
	if(ok) printf("YES\n");
	else printf("NO\n");
}