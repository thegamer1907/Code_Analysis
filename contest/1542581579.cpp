#include <cstdio>
#include <algorithm>
using namespace std;
int n,k,inx,cnt[100],tot;
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;++i)
	{
		int tmp=0;
		for(int j=0;j<k;++j) scanf("%d",&inx),tmp=tmp<<1|inx;
		cnt[tmp]++;
	}
	if(cnt[0])
	{
		printf("YES\n");
		return 0;
	}
	tot=(1<<k)-1;
	for(int i=1;i<=tot;++i) if(cnt[i]) for(int j=1;j<=tot;++j) if(cnt[j]&&(i&j)==0)
		{
			printf("YES\n");
			return 0;
		}
	printf("NO\n");
	return 0;
}