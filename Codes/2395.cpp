#include <stdio.h>
#define M 10000000
bool prime[M+5];
int have[M+5];
int count[M+5];
int main()
{
	for(int i=2;i<=M;i++)
		prime[i]=true;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int x;
		scanf("%d",&x);
		have[x]++;
	}
	for(int i=2;i<=M;i++)
	{
		if(prime[i]==true)
		{
			count[i]+=have[i];
			for(int j=2*i;j<=M;j+=i)
			{
				prime[j]=false;
				count[i]+=have[j];
			}
		}
	}
	for(int i=1;i<=M;i++)
	{
		count[i]+=count[i-1];
	}
	int m;
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		if(l>M)
			l=M;
		if(r>M)
			r=M;
		printf("%d\n",count[r]-count[l-1]);
	}
	return 0;
}