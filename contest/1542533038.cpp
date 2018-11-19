#include<iostream>
#include<string.h>
#include<queue>
#include<vector>
#include<cmath>
#include<cstdio>
#include<algorithm>
#define ll long long
#define N 100010 
using namespace std;

int a[16];
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++)
	{
		int pos=0;
		for(int i=1;i<=k;i++)
		{
			int num;
			scanf("%d",&num);
			pos=pos*2+num;
		}
		a[pos]++;
	}
	bool flag=0;
	if(a[0]) flag=1;
//	cout<<(1&2)<<endl;
	for(int i=0;i<=15;i++)
	{
	//	cout<<a[i]<<endl;
		for(int j=i+1;j<=15;j++)
		{
			if(a[i]&&a[j]&&((i&j)==0)) flag=true;
		}
	}
	if(flag) printf("yes\n");
	else printf("no\n");
 } 