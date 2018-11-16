#include <stdio.h>
#include <string.h>

#define maxn 100005

int main()
{   char s[maxn];
	int m,l,r,i,j,count;
	while(scanf("%s",s)!=EOF)
	{
		scanf("%d",&m);
		int len = strlen(s);
		int vis[maxn]={0};
		for(i = 1;i < len;++ i)
			vis[i]=((s[i]==s[i-1])?1:0)+vis[i-1];
		for(i=0;i<m;i++)
		{
			count=0;
			scanf("%d%d",&l,&r);
			long long ans = vis[r-1]-vis[l-1];
			printf("%lld\n",ans);
		}
	}
	return 0;
}

