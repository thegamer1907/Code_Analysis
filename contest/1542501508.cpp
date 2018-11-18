#include <cstdio>
#include <iostream>
#define N 110000
using namespace std;
typedef long long ll;
ll tot, f[21][N];
int n, k, p = 1, q = 0, a[N], c[N];

void to(int l, int r)
{
	while(q < r) tot += c[a[++ q]], c[a[q]] ++;
	while(p < l) tot -= c[a[p]] - 1, c[a[p ++]] --;
	while(q > r) tot -= c[a[q]] - 1, c[a[q --]] --;
	while(p > l) tot += c[a[-- p]], c[a[p]] ++;
}

void solve(int l, int r, int ls, int rs, int u)
{
	int mid = (ls + rs) / 2, cnt = 0;
	if (mid >= u)
	  for(int i = l; i <= min(r, mid - 1); i ++)
	  {
		  to(i + 1, mid);
		  if (f[u - 1][i] + tot < f[u][mid])
		  {
			  f[u][mid] = f[u - 1][i] + tot;
			  cnt = i;
		  }
	  }
	if (ls < mid && mid >= u) solve(l, cnt, ls, mid - 1, u);
	if (mid < rs) solve(cnt, r, mid + 1, rs, u);
}


int main()
{
//	freopen("1.in", "r", stdin);
//	freopen("1.out", "w", stdout);
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; i ++) 
		for(int j = 1; j <= k; j ++) 
			f[j][i] = 10000000000000;
	for(int i = 1; i <= n; i ++)
	{
		scanf("%d", &a[i]);
		to(1, i);
    f[1][i] = tot;
  }
  for(int i = 2; i <= k; i ++) solve(1, n, 1, n, i);
  cout << f[k][n];
  return 0;
}	