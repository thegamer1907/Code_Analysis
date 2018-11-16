#include<cstdio>
#include<algorithm>
#define inf 987654321
using namespace std;
int sum[200100];
int a[200100];
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		sum[i] = sum[i - 1] + a[i];
	}
	int dap = inf;
	int ch = 0;
	for (int i = m; i <= n; i++)
	{
		if (dap > sum[i] - sum[i - m])
		{
			dap = sum[i] - sum[i - m];
			ch = i - m+1;
		}
	}
	printf("%d", ch);
}