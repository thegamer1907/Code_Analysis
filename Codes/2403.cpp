#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int a[10000007];
int b[10000007];
int aa[10000007];
int bb[10000007];
int main()
{
	int m;
	scanf("%d",&m);
	int i,j;
	for(i=1;i<=m;i++)
		scanf("%d",a+i),b[a[i]]++;
	for(i=2;i<=1e7;i++)
	{
		if(!aa[i])
			for(j=i;j<=1e7;j=j+i)
				aa[j]=1,bb[i]=bb[i]+b[j];
		bb[i]=bb[i]+bb[i-1];
	}
	int aaa;
	scanf("%d",&aaa);
	for(i=0;i<aaa;i++)
	{
		int l,r;
		scanf("%d %d",&l,&r);
		l=min(l,(int)1e7);
		r=min(r,(int)1e7);
		int ans=bb[r]-bb[l-1];
		printf("%d\n",ans);
	}
	return 0;	
}