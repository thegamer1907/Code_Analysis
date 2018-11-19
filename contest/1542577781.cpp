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
int h,m,s,t1,t2;
const int mod=12*3600;
int main()
{
 	#ifdef TEST
	 	freopen("input.txt","r",stdin);
	#endif
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h=h*3600+m*60+s;
	m*=mod/60;
	s*=mod/60;
	m+=s/60;
	t1*=3600;
	t2*=3600;
	h%=mod,m%=mod,s%=mod,t1%=mod,t2%=mod;
	for(int i=t1;;i=(i+1)%mod)
	{
		if(i==h||i==m||i==s)
		{
			break;
		}
		if(i==t2)
		{
			puts("YES");
			return 0;
		}
	}
	for(int i=t1;;i=(i-1+mod)%mod)
	{
		if(i==h||i==m||i==s)
		{
			break;
		}
		if(i==t2)
		{
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}

