#include<stdio.h>
#include<algorithm>
using namespace std;
int zz[4];
int main()
{
	int t1,t2;
	scanf("%d%d%d%d%d",&zz[0],&zz[1],&zz[2],&t1,&t2);
	zz[1]/=5;
	if(zz[1]==0)
	{
		zz[1]=12;
	}
	zz[2]/=5;
	if(zz[2]==0)
	{
		zz[2]=12;
	}
	sort(zz,zz+3);
	zz[3]=13;
	int t11,t21;
	for(int i=0;i<4;i++)
	{
		if(t1<=zz[i])
		{
			t11=i;
			break;
		}
	}
	for(int i=0;i<4;i++)
	{
		if(t2<=zz[i])
		{
			t21=i;
			break;
		}
	}
	t11%=3;
	t21%=3;
	if(t11==t21)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}