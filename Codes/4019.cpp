#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
const int MaxN = 1e5;

int s[MaxN + 5],ans[MaxN + 5];

int main()
{
	int n,m,k,x,q;
	while(~scanf("%d %d",&n,&m))
	{
		int a[n + 5][m + 5];
		for(int i = 1;i <= n;i++)
		{
			ans[i] = i;
			for(int j = 1;j <= m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(int i = 1;i <= m;i++)
		{
			s[0] = 1;
			a[0][i] = 0;
			for(int j = 1;j <= n;j++)
			{
				s[j] = j;
				if(a[j][i] >= a[j - 1][i]) s[j] = s[j - 1];
				ans[j] = min(ans[j],s[j]);
			}
		}
		scanf("%d",&q);
		for(int i = 1;i <= q;i++)
		{
			scanf("%d %d",&x,&k);
			if(ans[k] <= x) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}