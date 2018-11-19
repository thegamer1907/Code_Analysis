#include<cstdio>
#include<cstring>
#include<algorithm>
#define nn 102
using namespace std;

int n,k,s,x,b[nn];

int main()
{
	scanf("%d%d\n",&n,&k);
	for(int i=1;i<=n;++i)
	{
		s=0;
		for(int j=1;j<=k;++j) scanf("%d",&x),s=(s<<1)|x;
		b[s]=1;
	}
	for(int i=0;i<(1<<k);++i)
	{
		for(int j=0;j<(1<<k);++j)
		{
			if(b[i]&&b[j]&&(i&j)==0)
			{
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	
	return 0;
}
