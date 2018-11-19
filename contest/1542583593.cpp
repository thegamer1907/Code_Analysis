#include<map>
#include<cmath>
#include<queue>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define inf 1000000007
#define ll long long
#define N 100010
inline int rd()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
int n,k,ji[30];
int main()
{
	n=rd();k=rd();
	for(int i=1,x;i<=n;i++)
	{
		x=0;
		for(int j=1;j<=k;j++)
		{
			x<<=1;
			x|=rd();
		}
		ji[x]++;
	}
	if(ji[0])
	{
		puts("YES");
		return 0;
	}
	for(int i=1,x;i<15;i++)
	{
		x=15^i;
		if(!ji[i]) continue;
		for(int j=1;j<15;j++)
		{
			if((x|j)==x)
			{
				if(ji[j])
				{
					puts("YES");
					return 0;
				}
			}
		}
	}
	puts("NO");
	return 0;
}