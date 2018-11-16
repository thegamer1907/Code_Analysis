#include<bits/stdc++.h>
using namespace std;
int a[505][505],s1[505][505],s2[505][505];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		getchar();
		for(int j=0;j<m;j++)
		{
			char c=getchar();
			if(c=='.')a[i][j]=1;else a[i][j]=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		s1[i][0]=0;
		for(int j=1;j<m;j++)
		{
			if(a[i][j]&&a[i][j-1])s1[i][j]=s1[i][j-1]+1;else s1[i][j]=s1[i][j-1];
		}
	}
	for(int j=0;j<m;j++)
	{
		s2[j][0]=0;
		for(int i=1;i<n;i++)
		{
			if(a[i][j]&&a[i-1][j])s2[j][i]=s2[j][i-1]+1;else s2[j][i]=s2[j][i-1];
		}
	}
	int q;
	scanf("%d",&q);
	for(int i=0;i<q;i++)
	{
		int x1,x2,x3,x4;
		scanf("%d%d%d%d",&x1,&x2,&x3,&x4);
		x1--;x2--;x3--;x4--;
		int ans=0;
		for(int j=x1;j<=x3;j++)
		{
			ans+=(s1[j][x4]-s1[j][x2]);
		}
		for(int j=x2;j<=x4;j++)
		{
			ans+=(s2[j][x3]-s2[j][x1]);
		}
		printf("%d\n",ans);
	}
	return 0;
}
