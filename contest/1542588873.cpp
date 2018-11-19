#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define MN 100000 
using namespace std;
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
int n,k,u[16];
int main()
{
	n=read();k=read();
	for(int i=1;i<=n;++i)
	{
		int x=0;
		for(int j=0;j<k;++j)x|=read()<<j;
		++u[x];
	}
	for(int i=0;i<1<<k;++i)for(int j=0;j<1<<k;++j)
		if(u[i]&&u[j]&&!(i&j))return 0*puts("YES");
	puts("NO");
	return 0;
}