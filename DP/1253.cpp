#include<cstdio>
#include<algorithm>
using namespace std;
int n,a[110],ch[110];
int main()
{
	scanf("%d", &n);
	int sum = 0;
	int dap = -201;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
		ch[i] = sum;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int y = i; y <= n; y++)
		{
			int o = y - i + 1;
			dap = max(dap, o - (ch[y] - ch[i-1]) * 2);
		}
	}
	printf("%d", dap + sum);
}