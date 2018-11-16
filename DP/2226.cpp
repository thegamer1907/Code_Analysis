#include<stdio.h>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
using namespace std;
#define ll long long
const int maxm = 500005;
int flag[maxm], a[maxm], ans[maxm], b[maxm], q[maxm];
int main()
{
	int n, i, j, m, sum, k;
	scanf("%d%d", &n, &m);
	sum = 0;
	for (i = 1;i <= n;i++)
	{
		scanf("%d", &a[i]);
		if (!flag[a[i]])
			sum++;
		flag[a[i]]++;
	}
	for (i = 1;i <= m;i++)
	{
		scanf("%d", &k);
		q[i] = k, b[k] = 1;
	}
	for (i = 1;i <= n;i++)
	{
		if (b[i]) ans[i] = sum;
		flag[a[i]]--;
		if (flag[a[i]] == 0) sum--;
	}
	for (i = 1;i <= m;i++)
		printf("%d\n", ans[q[i]]);
	return 0;
}