#include<stdio.h>
int have[32];
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	if(k==1)
	{
		for(int i=0;i<n;i++)
		{
			int a;
			scanf("%d",&a);
			if(a==0)
			{
				printf("YES\n");
				return 0;
			}
		}
		printf("NO\n");
		return 0;
	}
	if(k==2)
	{
		for(int i=0;i<n;i++)
		{
			int a1,a2;
			scanf("%d%d",&a1,&a2);
			have[a1*2+a2]=1;
		}
		if(have[0])
		{
			printf("YES\n");
			return 0;
		}
		if(have[1]&&have[2])
		{
			printf("YES\n");
			return 0;
		}
		printf("NO\n");
		return 0;
	}
	if(k==3)
	{
		for(int i=0;i<n;i++)
		{
			int a1,a2,a3;
			scanf("%d%d%d",&a1,&a2,&a3);
			have[a1*4+a2*2+a3]=1;
		}
		int cnt=0;
		if(have[0])
		{
			printf("YES\n");
			return 0;
		}
		if(have[1])
		{
			if(have[6])
			{
				printf("YES\n");
				return 0;
			}
			cnt++;
		}
		if(have[2])
		{
			if(have[5])
			{
				printf("YES\n");
				return 0;
			}
			cnt++;
		}
		if(have[4])
		{
			if(have[3])
			{
				printf("YES\n");
				return 0;
			}
			cnt++;
		}
		if(cnt>=2)
		{
			printf("YES\n");
			return 0;
		}
		printf("NO\n");
		return 0;
	}
	int a1,a2,a3,a4;
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
		have[a1*8+a2*4+a3*2+a4]++;
	}
	if(have[0])
	{
		printf("YES\n");
		return 0;
	}
	for(int i=1;i<15;i++)
	{
		for(int j=1;j<15;j++)
		{
			if((i&j))
			{
				continue;
			}
			if(have[i]&&have[j])
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	if(have[1]||have[2]||have[4]||have[8])
	{
		printf("NO\n");
		return 0;
	}
	printf("NO\n");
	return 0;
}