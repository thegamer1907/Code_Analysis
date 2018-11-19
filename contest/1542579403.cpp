#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,k,m1,m2;
struct st{
	int s,t[5];
}a[100010];
int cmp(st a,st b)
{
	return a.s<b.s;
}
int check(int x,int y)
{
	for(int j=1;j<=k;j++)
	if((a[x].t[j]&a[y].t[j])==1)
	return 0;
	return 1;
}
int ucheck(int x)
{
	if(x==1) return 0;
	for(int i=1;i<=k;i++)
	if(a[x].t[i]!=a[x-1].t[i]) return 0;
	return 1;
}
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		scanf("%d",&a[i].t[j]),a[i].s+=a[i].t[j];
	}
	sort(a+1,a+n+1,cmp);
	if(a[1].s==0)
	{
		puts("YES");
		return 0;
	}
	for(int j=1;j<n;j++)
	{
	if(ucheck(j))
	break;
	if(a[j].s>a[j-1].s&&j>1)
	continue;
	for(int i=j+1;i<=n;i++)
	if(check(j,i))
	{
		puts("YES");
		return 0;
	}	
	}
	puts("NO");
}
