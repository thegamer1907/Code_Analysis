#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
	int n,k;
	int num[20];
	cin>>n>>k;
	memset(num,0,sizeof(num));
	for(int i=0;i<n;i++)
	{
		int x=0;
		for(int j=1;j<=k;j++)
		{
			int a;
			scanf("%d",&a);
			x|=a<<(k-j);
		}
		//printf("%d\n",x);
		num[x]=1;
	}
	int ok=0;
	for(int i=0;i<(1<<k);i++)
		for(int j=0;j<(1<<k);j++)
			if((i&j)==0&&num[i]&&num[j])
				ok=1;
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
 } 
