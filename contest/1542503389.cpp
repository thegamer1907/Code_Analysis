#include<cstdio>
#include<bitset>
using namespace std;
int n,k,i,j,x,a[100005],cnt[20];
int main()
{
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			scanf("%d",&x);
			if(x==1)a[i]|=(1<<(j-1));
		}
	}
	for(i=1;i<=n;i++)cnt[a[i]]++;
	if(cnt[0]>0)
	{
		printf("YES");
		return 0;
	} 
	for(i=1;i<(1<<k);i++)
	{
		if(cnt[i])
		{
			for(j=1;j<(1<<k);j++)
			{
				if(cnt[j]&&(j&i)==0)
				{
					printf("YES");
					return 0;
				}
			}
		}
	}
	printf("NO");
	return 0;
}
