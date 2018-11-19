#include<stdio.h>
#include<algorithm>
#include<algorithm>
using namespace std;
const int maxm = 100005;
struct node
{
	int a[5], s;
}p[maxm];
int flag[11102] = { 0 };
int main()
{
	int n, i, j, k, sum, a, b, c, d, cnt = 0;
	node temp;
	scanf("%d%d", &n, &k);
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= k;j++) scanf("%d", &temp.a[j]);
		for (j = k + 1;j <= 4;j++) temp.a[j] = 0;
		int now = 1, ans = 0;
		for (j = 4;j >= 1;j--)
		{
			ans += (temp.a[j] * now);
			now *= 2;
		}
		if (ans == 0)
		{
			printf("YES\n");
			return 0;
		}
		if (flag[ans]) continue;
		flag[ans] = 1;
		p[++cnt] = temp;
	}
	for (i = 1;i <= cnt;i++)
	{
		for (j = i + 1;j <= cnt;j++)
		{
			if (p[i].a[1] + p[j].a[1] <= 1 && p[i].a[2] + p[j].a[2] <= 1 && p[i].a[3] + p[j].a[3] <= 1 && p[i].a[4] + p[j].a[4] <= 1)
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}