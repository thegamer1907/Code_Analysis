/* LittleFall : Hello! */
#include <bits/stdc++.h>
using namespace std;
int save[16];
int main(void)
{
	int n,k,tmp;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		int pp=0;
		for(int j=k-1;j>=0;j--)
		{
			scanf("%d",&tmp);
			pp+=tmp<<j;
		}
		save[pp]++;
	}
	if(save[0])
	{
		printf("yes\n");
		return 0;
	}
	for(int i=1;i<16;i++)
	{
		for(int j=i+1;j<16;j++)
		{
			if((i&j)==0&&save[i]&&save[j])
			{
				printf("yes\n");
				return 0;
			}
		}
	}
	printf("no\n");
	return 0;
}