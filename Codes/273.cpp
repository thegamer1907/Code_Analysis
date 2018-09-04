#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>

#define fi "a.inp"
#define fo "a.out"

#define maxint 2147483647

using namespace std;

int n,m;
int x;
int a[100010];

int timvt(int gt)
{
	int dau,giua,cuoi;
	int vt;
	
	dau=1;
	cuoi=n;
	while(dau<=cuoi)
	{
		giua=(dau+cuoi)/2;
		
		if(a[giua]>=gt)
		{
			vt=giua;
			cuoi=giua-1;
		}
		if(a[giua]<gt)
		{
			dau=giua+1;
		}
	}
	
	return vt;
}

int main()
{
	int i;
//	freopen(fi,"r",stdin);
//	freopen(fo,"w",stdout);
	
	while(scanf("%d",&n)>0)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&x);
			
			a[i]=a[i-1]+x;
		}
		
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&x);
			
			printf("%d\n",timvt(x));
		}
	}
	
	return 0;
}
