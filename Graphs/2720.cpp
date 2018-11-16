#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
const int maxm = 200005;
const ll INF = 1e17;
ll dis[maxm], ans[maxm];
int n, cnt, pre[maxm], vis[maxm];
struct node
{
	int a, b, len;
	bool operator<(const node &r)const
	{
		if (a != r.a) return a < r.a;
		else if (b != r.b) return b < r.b;
		else return len < r.len;
	}
}p[maxm];
struct S
{
	int v, len;
};
vector<S>g[maxm];
void print(int k)
{
	if (k != 1) print(pre[k]);
	printf("%d ", k);
}
void bfs()
{
	for (int i = 1;i <= n;i++) dis[i] = INF, pre[i] = i;
	dis[1] = 0;
	priority_queue<int>q;
	q.push(1);
	while (!q.empty())
	{
		int u = q.top();q.pop();
		if (vis[u]) continue;
		vis[u] = 1;
		for (int i = 0;i < g[u].size();i++)
		{
			int v = g[u][i].v, len = g[u][i].len;
			if (dis[v] > dis[u] + len)
			{
				dis[v] = dis[u] + len;
				q.push(v), pre[v] = u, vis[v] = 0;
			}
		}
	}
}
int main()
{
	int i, j, k, sum, m;
	scanf("%d%d", &n, &m);
	for (i = 1;i <= m;i++)
	{
		scanf("%d%d%d", &p[i].a, &p[i].b, &p[i].len);
		if (p[i].b < p[i].a) swap(p[i].a, p[i].b);
	}
	sort(p + 1, p + 1 + m);
	for (i = 1;i <= m;i++)
	{
		if (p[i].a == p[i].b || (p[i].a == p[i - 1].a&&p[i].b == p[i - 1].b))
			continue;
		g[p[i].a].push_back({ p[i].b,p[i].len });
		g[p[i].b].push_back({ p[i].a,p[i].len });
	}
	bfs();
	if (dis[n] == INF)
		printf("-1\n");
	else print(n);
	return 0;
}