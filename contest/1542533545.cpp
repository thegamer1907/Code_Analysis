#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int n,k,x,tmp,p[30];
int main(void)
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		tmp=0;
		for(int j=0;j<k;j++)
		{
			scanf("%d",&x);
			tmp|=(x<<j);
		}
		p[tmp]++;
	}
	//printf("%d\n",1&2);
	for(int i=0;i<16;i++)
		for(int j=0;j<16;j++)
		{
			//printf("%d %d\n",i,j);
			if((i&j)==0 && p[i] && p[j])
			{
				printf("YES\n");
				return 0;
			}
		}
	printf("NO\n");
	return 0;
}