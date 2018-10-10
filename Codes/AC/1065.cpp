#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
#define ll long long
const int maxm = 100005;
struct node
{
	int x, y;
	bool operator<(const node &r)const
	{
		return x < r.x;
	}
}p[maxm];
int main()
{
	int n, i, j, k, m, id;
	ll ans, sum;
	scanf("%d%d", &n, &m);
	for (i = 1;i <= n;i++)
		scanf("%d%d", &p[i].x, &p[i].y);
	sort(p + 1, p + 1 + n);
	ans = sum = 0;
	ans = sum = p[1].y, id = 1;
	for (i = 2;i <= n;i++)
	{
		if (p[i].x - p[id].x >= m)
		{
			ans = max(ans, sum);
			while (p[i].x - p[id].x >= m)
				sum -= p[id].y, id++;
		}
		sum += p[i].y;
		ans = max(ans, sum);
	}
	printf("%lld\n", ans);
	return 0;
}