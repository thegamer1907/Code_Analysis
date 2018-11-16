#include <bits/stdc++.h>
#define N 100005
using namespace std;
int suf[N],a[N],top,n,ar[N],k,l,q,m,res[N];
char s[N];
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(int i=n;i>=1;i--)
	{
		suf[i]+=suf[i+1];
		if(a[ar[i]]==0)
			suf[i]+=1,a[ar[i]]=1;
	}
	for(int i=1;i<=m;i++)
	{
		int h;
		scanf("%d",&h);
		res[i]=suf[h];
	}
	//~ for(int i=1;i<=n;i++)
		//~ printf("%d ",a[ar[i]]);
	//~ printf("\n");
	//~ for(int i=1;i<=n;i++)
		//~ printf("%d ",suf[i]);
	for(int i=1;i<=m;i++)
	{
		printf("%d\n",res[i]);
	}	
}
