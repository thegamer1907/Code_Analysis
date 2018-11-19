#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
const int maxn=1e5+7;
int a[maxn][6];
int b[maxn];
int main()
{
	int i,j,n,m,t,z,k;
	scanf("%d%d",&n,&k);
	int flag=0;
	memset(b,0,sizeof(b));
	for(i=1;i<=n;i++)
	{
		t=0;
		for(j=1;j<=k;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			t++;
		}
		if(t==k)
		flag=1;
		for(j=1;j<=k;j++)
		b[i]=b[i]*10+a[i][j];
	}
	for(i=1;i<=n;i++)
	{
		if(b[i]==-1)
		continue;
		for(j=i+1;j<=n;j++)
		{
			if(b[j]==-1)
			continue;
			if(b[j]==b[i])
			{
				b[j]=-1;
			}
			else 
			{
				t=b[i]+b[j];
				int fl=0;
				while(t!=0)
				{
					int x=t%10;
					if(x==2)
					fl++;
					t=t/10;
				}
				if(fl==0)
				flag=1;
			}
		}
		
	}
	if(flag)
	printf("YES\n");
	else 
	printf("NO\n");
	return 0;
}