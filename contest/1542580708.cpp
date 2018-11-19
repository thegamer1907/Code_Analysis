#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath> 
#include <vector>
#define N 100005
using namespace std; 

int n,k,f[N];
bool mark[N];

int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<k;j++)
		{
			int x;scanf("%d",&x);
			f[i]|=(x<<j);
		}
		mark[f[i]]=1;
	}
	for(int i=0;i<32;i++)
	{
		if(!mark[i]) continue;
		for(int j=0;j<32;j++)
			if(mark[j]&&!(i&j)) {printf("YES");return 0;}
	}
	printf("NO");
	return 0;
} 
