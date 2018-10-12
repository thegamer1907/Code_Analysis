#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
int n,a[106],m,MAX,sum;
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
		MAX=max(MAX,a[i]);
	}
	sum+=m;
	int ren=sum/n,yu=sum%n;
	if(yu!=0)
	{
		if(MAX>ren+1)printf("%d ",MAX);
		else printf("%d ",ren+1);
	}
	else
	{
		if(MAX>ren)printf("%d ",MAX);
		else printf("%d ",ren);
	}
	printf("%d",MAX+m);
}