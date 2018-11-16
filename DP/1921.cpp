#include<cstdio>
#include<cstring>
#define maxn 100005
int sum[maxn << 2];
void update(int id, int L, int R, int pos)
{
	if (L == R)
    {
        sum[id] = 1;
        return;
    }
	else
	{
		int mid = (L + R) >> 1;
		if (pos <= mid)
            
            update(id << 1, L, mid, pos);
		else
            update(id << 1 | 1, mid + 1, R, pos);
		sum[id] = sum[id << 1] + sum[id << 1 | 1];
	}
	return;
}
int a[maxn];
int ans[maxn];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
	memset(sum, 0, sizeof(sum));

	for (int i = n; i >= 1; i--)
	{
		update(1, 1, 100000, a[i]);
		ans[i] = sum[1];
	}

	while(m--)
	{
		int x;
		scanf("%d", &x);
		printf("%d\n", ans[x]);
	}

	return 0;
}



