#include<bits/stdc++.h>
using namespace std;
int a[100005][5],b[16];
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)for(int j=0;j<k;j++)scanf("%d",&a[i][j]),a[i][k]+=a[i][j];
	for(int i=0;i<n;i++)if(a[i][k]==0)
	{
		puts("YES");
		return 0;
	}
	for(int i=0;i<k;i++)
	{
		int s=0;
		for(int j=0;j<n;j++)
		{
			s+=a[j][i];
		}
		if(s==n)
		{
			puts("NO");
			return 0;
		}
	}
	if(k==1)
	{
		puts("NO");
		return 0;
	}
	if(k==2)
	{
		bool f1=false,f2=false;
		for(int i=0;i<n;i++)
		{
			if(a[i][k]==1)
			{
				if(a[i][0]==0)f1=true;
				if(a[i][1]==0)f2=true;
			}
		}
		if(f1&&f2)puts("YES");else puts("NO");
		return 0;
	}
	bool f=false;
	for(int i=0;i<n;i++)if(a[i][k]==1)f=true;
	if(k==3)
	{
		if(!f)puts("NO");else puts("YES");
		return 0;
	}
	if(k==4)
	{
		if(f)puts("YES");
		else
		{
			int sum=15;
			for(int i=0;i<n;i++)
			{
				if(a[i][k]==2)
				{
					int t=0;
					for(int j=0;j<4;j++)if(a[i][j]==1)t|=(1<<j);
					b[t]=1;
				}
			}
			for(int i=0;i<16;i++)if(b[i]&&b[sum-i])
			{
				puts("YES");
				return 0;
			}
			puts("NO");
			return 0;
		}
	}
	return 0;
}
