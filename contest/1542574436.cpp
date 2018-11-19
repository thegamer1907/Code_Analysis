#include<cstdio>
using namespace std;

int x[256],n,t,k;

int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1,tt;i<=n;i++)
	{
		tt=0;
		for(int j=1;j<=k;j++)
		{
			scanf("%d",&t);
			tt=tt*2+t;
		}
		++x[tt];
	}
	for(int i=0;i<(1<<k);i++)
		for(int j=0;j<(1<<k);j++)
			if(x[i]&&x[j]&&(i+j==(i^j)))
			{
				printf("YES");
				return 0;
			}
	printf("NO");
	return 0;
}
