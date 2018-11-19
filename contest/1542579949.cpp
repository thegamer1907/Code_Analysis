#include <cstdio>
using namespace std;
int inline read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
int n,k,ton[20],x,a[100010];
main()
{
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++)
	{
		int p=0;
		for (int j=0;j<k;j++)
		{
			x=read();
			(p<<=1)+=x;
		}
		a[i]=p;
//		printf("%d\n",a[i]);
		for(int j=0;j<=19;j++)
			if((j&p)==0)
				ton[j]++;
	}
	for(int i=1;i<=n;i++)
		if(ton[a[i]]>0)
		{
			printf("YES");
			return 0;
		}
	printf("NO");
	return 0;
}