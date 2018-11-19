#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int t[6],f[100],n,k,x,i,j,tmp;
int main()
{
	t[0]=1,t[1]=2,t[2]=4,t[3]=8,t[4]=16;
	scanf("%d%d",&n,&k);
	while (n--)
	{
		tmp=0;
		for (i=1;i<=k;i++) 
		{
			scanf("%d",&x);
			if (x==1) tmp+=t[i-1];
		}
		f[tmp]=1;
	}
	for (i=0;i<t[k]-1;i++) if (f[i])
		for (j=i;j<t[k];j++) if (f[j])
			if ((i&j)==0)
			{
				printf("YES");
				return 0;
			}
	printf("NO");
}
