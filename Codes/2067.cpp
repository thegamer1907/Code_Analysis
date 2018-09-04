//Nguyen Dinh Anh Tung
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <map>
#include <queue>

#define maxint 2147483647

#define fi "a.inp"
#define fo "a.out"

using namespace std;

map<long long,int> mleft,mright;

int n,m;
int a[200010];
long long kq;

void solve()
{
	int i;
	
	mleft[a[0]]=1;
	for(i=1;i<n-1;i++)
	{
		mright[a[i]]--;
		if(a[i]%m==0)
		{
			kq += (long long)mleft[a[i]/m] * mright[(long long)a[i]*m];
		}
		
		mleft[a[i]]++;
	}
}

void output()
{
	printf("%I64d\n",kq);
}

int main()
{
	int i;
//	freopen(fi,"r",stdin);
//	freopen(fo,"w",stdout);

	while(scanf("%d %d",&n,&m)>0)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(i>=1)
			{
				mright[a[i]]++;
			}
		}
		
		solve();
		
		output();
	}
	
	return 0;
}
