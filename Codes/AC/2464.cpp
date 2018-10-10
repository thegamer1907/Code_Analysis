#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
int a[1000005],factor[10000005],prime[1000005],tot,num[10000005],sum[10000005];
void get_factor()
{
	tot=0;
	memset(factor,0,sizeof(factor));
	for(int i=2;i<=10000000;i++)
	{
		if(factor[i]==0)factor[i]=prime[tot++]=i;
		for(int j=0;j<tot&&i*prime[j]<=10000000&&prime[j]<=factor[i];j++)
			factor[i*prime[j]]=prime[j];
	}
}
int main()
{
	get_factor();
	//for(int i=1;i<=100;i++)printf(" %d %d\n",i,factor[i]);
	int n,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		int temp=a[i];
		while(temp>1)
		{
			int x=factor[temp];
			num[x]++;
			while(temp%x==0)temp/=x;
		}
	}
	int now=0;
	for(int i=1;i<=10000000;i++)
	{
		now+=num[i];
		sum[i]=now;
	}
	scanf("%d",&m);
	while(m--)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		if(l>10000000)printf("0\n");
		else if(r>10000000)printf("%d\n",sum[10000000]-sum[l-1]);
		else printf("%d\n",sum[r]-sum[l-1]);
	}
	return 0;
}
