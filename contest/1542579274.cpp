#include <iostream>
#include <cstdio>
using namespace std;
bool f[100],flag;
int n,k,a[100005][30];
int get(int o)
{
	int x=1,s=0;
	for (int i=1;i<=k;++i)
		s+=x*a[o][i],
		x<<=1;
	return s;
}
void insert(int x,int t=1,int s=0,int q=1)
{
	if (t>k)
	{
		f[s]=1;
		return;
	}
	for (int i=0;i<=1-a[x][t];++i)
		insert(x,t+1,s+i*q,q*2);	
}
int main()
{
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;++i)
	{
		flag=0;
		for (int j=1;j<=k;++j)
		{			
			scanf("%d",&a[i][j]);
			if (a[i][j]==1)	flag=1;
		}
		if (!flag)	return puts("YES"),0;
		if (f[get(i)])	return puts("YES"),0;
		insert(i);
	}
	puts("NO");
	return 0;
}