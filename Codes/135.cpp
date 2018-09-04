#include<stdio.h>
#include<algorithm>
#include<map>
#include<string.h>
using namespace std;
#define ll long long
map<int, int>p;
const int maxm = 100006;
int flag[maxm], a[maxm], q[maxm], b[maxm], s[maxm];
int main()
{
	int n, i, j, k, sum, m;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		scanf("%d", &a[i]);
		s[i] = s[i - 1] + a[i];
	}
	scanf("%d", &m);
	for (i = 1;i <= m;i++)
	{
		scanf("%d", &q[i]);
		b[i] = q[i];
	}
	sort(b + 1, b + 1 + m);
	int now = 1;
	for (i = 1;i <= m;i++)
	{
		while (s[now] < b[i])
			now++;
		p[b[i]] = now;
	}
	for (i = 1;i <= m;i++)
		printf("%d\n", p[q[i]]);
	return 0;
}