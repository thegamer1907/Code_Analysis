#include <bits/stdc++.h>
using namespace std;
int n,m,x,y;
char a[2000];
struct node
{
	bitset<1030> vis;
	int h,t,len;
	node()
	{
		len=h=t=0;
		vis.reset();
	}
	void record(char a[])
	{
		len=strlen(a+1);
		int x=0;
		for(int j=1;j<=len;j++)
		{
			x=((x<<1)+(a[j]=='1'))%(1<<9);
			if(j==9)
				h=x;
			for(int k=1;k<=min(j,9);k++)
				vis[x%(1<<k)+(1<<k)]=1;
		}
		if(len<9) h=x;
		else len=9;
		t=x;
	}
} w[2001];
node merge(node a,node b)
{
	node tem;
	tem.len=a.len+b.len;
	if(tem.len>9) tem.len=9;
	if(a.len<9)
	{
		tem.h=a.h;
		for(int i=1;i<=min(9-a.len,b.len);i++)
			tem.h=(tem.h<<1)+((b.h&(1<<b.len-i))>0);
	}
	else
		tem.h=a.h;
	if(b.len<9)
		tem.t=((a.t%(1<<9-b.len))<<b.len)+b.t;
	else
		tem.t=b.t;
	int x=0;
	tem.vis=a.vis|b.vis;
	for(int i=1;i<=a.len;i++)
	{
		x=(x<<1)+((a.t&(1<<(a.len-i)))>0);
		for(int k=1;k<=min(i,9);k++)
			tem.vis[x%(1<<k)+(1<<k)]=1;
	}
	for(int i=1;i<=b.len;i++)
	{
		x=(x<<1)+((b.h&(1<<(b.len-i)))>0);
		for(int k=1;k<=min(i+a.len,9);k++)
			tem.vis[x%(1<<k)+(1<<k)]=1;
	}
	return tem;
}
bool ok(int x,int in)
{
	for(int i=0;i<1<<x;i++)
		if(!w[in].vis[i+(1<<x)]) return 0;
	return 1;
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",a+1);
		w[i].record(a);
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&x,&y);
		w[n+i]=merge(w[x],w[y]);
		for(int k=1;k<=9;k++)
		if(!ok(k,n+i))
		{
			printf("%d\n",k-1);
			break;
		}
	}
	return 0;
} 