#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int n,k;
int a[21];

int main()
{
//	freopen("a.in","r",stdin);
	
	int i,j;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;++i)
	{
		int sta=0;
		for(j=1;j<=k;++j)
		{
			int x;
			scanf("%d",&x);
			sta+=x<<j-1;
		}
		a[sta]++;
	}
	int sum=(1<<k)-1;
	for(i=0;i<=sum;++i)
		for(j=0;j<=sum;++j)
			if((i&j)==0&&a[i]&&a[j]) {printf("YES");return 0;}	
	printf("NO"); 
	
	return 0;
}
