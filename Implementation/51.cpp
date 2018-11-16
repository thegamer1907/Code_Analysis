#include <map>
#include <queue>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define inf 0x3f3f3f3f
#define N 10
using namespace std;
int n,m,x,y;

int main()
{
	int i,j,k;

	scanf("%d%d%d",&n,&x,&y);
	if(x>y)swap(x,y);

	m=-1;
	while(n)
	{
		n>>=1;
		m++;
	}

	k=1;
	for(i=m-1;i+1;i--)
	{
		if(x<=(1<<i)&&y>(1<<i))
		{
			k=i+1;
			break;
		}
		if(x>(1<<i))
		{
			x-=(1<<i);
			y-=(1<<i);
		}
	}
	if(k==m)puts("Final!");
	else printf("%d\n",k);

	return 0;
}