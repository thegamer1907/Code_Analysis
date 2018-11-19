#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#define mem(a,b) memset(a,b,sizeof(a))
#define ll long long
#define ull unsigned long long
#define EPS 1e-8
using namespace std;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
const double pi = acos(-1.0);
int read()
{
	int ret=0;char ch=getchar();
	while(ch<'0'||ch>'9') ch=getchar();
	for(;ch>='0'&&ch<='9';ch=getchar()) ret=ret*10+ch-'0';
	return ret;
}
int n,k;
int cnt[16];
int main()
{
 	#ifdef TEST
	 	freopen("input.txt","r",stdin);
	#endif
	scanf("%d%d",&n,&k);
	int x,y;
	mem(cnt,0);
	for(int i=0;i<n;i++)
	{
		x=0;
		for(int j=0;j<k;j++)
		{
			scanf("%d",&y);
			x=x<<1|y;
		}
		cnt[x]++;
	}
	for(int i=0;i<16;i++)
	{
		for(int j=0;j<16;j++)
		{
			if(cnt[i]>0&&cnt[j]>0&&((i&j)==0))
			{
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}

