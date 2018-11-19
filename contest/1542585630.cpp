#include<cstdio>
#include<algorithm>
using namespace std;
bool f[16];
int n,k;
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		int now=0,x;
		for(int j=1;j<=k;j++)
		{
			scanf("%d",&x);
			now<<=1;
			now|=x;
		}
		f[now]=1;
	}
	for(int i=0;i<(1<<k);i++)if(f[i])
	for(int j=0;j<(1<<k);j++)if(f[j])
	if((i&j)==0)
	return puts("YES"),0;
	puts("NO");
}