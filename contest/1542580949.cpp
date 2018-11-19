#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int tmp;
int x;
int h[20];
int main ()
{
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		tmp=0;
		for(int j=1;j<=k;j++)
		{
			scanf("%d",&x);
			tmp=tmp<<1|x;
		}
		h[tmp]++;
	}
	for(int i=0;i<(1<<k);i++)
	{
		for(int j=0;j<(1<<k);j++)
		{
			if(h[i]&&h[j])
			{
				if(!(i&j))
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