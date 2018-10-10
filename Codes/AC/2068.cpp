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

std::map<int, std::map<int, long long> > mmap;

int n,m;
int x;
long long kq;

int main()
{
	int i;
	int tg;
//	freopen(fi,"r",stdin);
//	freopen(fo,"w",stdout);

	while(scanf("%d %d",&n,&m)>0)
	{
		kq=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			
			tg=x;
			
			if((tg%m)==0 && (tg/m)%m==0 && i>=2)
			{
				kq += mmap[tg/m][2];
			}
			
			if(tg%m==0 && i>=1)
			{
				tg=tg/m;
				mmap[x][2] += mmap[tg][1] ;
			}
			
			mmap[x][1]++;
		}
		
		printf("%I64d\n",kq);
	}
	
	return 0;
}
