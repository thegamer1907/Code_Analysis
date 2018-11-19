#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
#include <ctime>

#define Rep(i, n) for (int i = 1; i <= n; i ++)
#define Rep0(i, n) for (int i = 0; i <= n; i ++)
#define RepG(i, x) for (int i = head[x]; i != -1; i = edge[i].next)
#define v edge[i].to
#define mp(a, b) make_pair(a, b)
#define fi first
#define se second

using namespace std;

const int N = 110;

struct Edge{ int fr, to, next, c;} edge[N * 2];
int head[N], num = -1;
void add_edge(int a, int b, int c) { edge[++ num] = (Edge){a, b, head[a], c}, head[a] = num;}

int f[N * 2][N][N], g[N], tg[N], sz[N];

int get_sz(int x, int fa)
{
	RepG(i, x) if (v != fa) sz[x] += get_sz(v, x);
	return sz[x];
}

int dfs(int e, int s1, int s2)
{
//	printf("%d %d %d\n", e, s1, s2);
	if (!s1 && !s2) return 0;
	if (!s1) return 1e9;
	if (f[e][s1][s2] != -1) return f[e][s1][s2];
	int x = edge[e].to;
	bool flag = true;
	RepG(i, x) if ((i ^ 1) != e){ Rep0(j, s1) dfs(i, j, s2 + s1 - j); flag = false; }
	if (flag) return f[e][s1][s2] = edge[e].c + dfs(e ^ 1, s2, 0);
	
	int ss = 0;
	memset(g, 0, sizeof(g));
	g[0] = 1e9;
	RepG(i, x) if ((i ^ 1) != e) {
		Rep0(j, s1) Rep0(k, s1 - j)
			tg[j + k] = max(tg[j + k], min(g[j], dfs(i, k, s2 + s1 - k)));
		Rep0(j, s1) g[j] = tg[j], tg[j] = 0;
	}
//	printf("%d %d %d %d %d\n", edge[e].fr, x, s1, s2, edge[e].c + g[s1]);
	return f[e][s1][s2] = edge[e].c + g[s1];
}

int main()
{
	int n;
	scanf("%d", &n);
	memset(head, -1, sizeof(head));
	Rep(i, n - 1) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		add_edge(a, b, c); add_edge(b, a, c);
	}
	
	int s, m;
	scanf("%d%d", &s, &m);
	Rep(i, m){
		int x;
		scanf("%d", &x);
		sz[x] ++;
	}
	get_sz(s, 0);
	memset(f, -1, sizeof(f));
	int ans = 1e9;
	RepG(i, s) ans = min(ans, dfs(i, sz[v], m - sz[v]));
	
	printf("%d\n", ans);
	
	return 0;
}
/*
4
1 2 2
1 3 1
1 4 1
2
4
3 1 4 1
*/