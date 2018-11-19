#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int n,k,sum[100100],p[20];
bool calc(int x,int y)
{
	for (int i=1;i<=4;i++)
	{
		int x1=x%2,y1=y%2;
		if (x1+y1>1) return false;
		x/=2;y/=2;
	}
	return true;
}
int main()
{
	scanf("%d%d",&n,&k); 
	for (int i=1;i<=n;i++)
	{
		sum[i]=0;
		int x;
		for (int j=1;j<=k;j++) { scanf("%d",&x);sum[i]=sum[i]*2+x;}
		p[sum[i]]++;
	}
	bool flag=false;
	if (n==1)
	{
		if (p[0]>0) puts("YES");else puts("NO");
		return 0;
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=0;j<=15;j++)
		{
			if (sum[i]==j&&p[j]==1) continue;
			if (calc(sum[i],j)&&p[j]>0) { flag=true;break;}
		}
		if (flag) break;
	}
	if (flag) puts("YES");else puts("NO");
	return 0;
}