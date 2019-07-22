#include<cstdio>
#include<algorithm>
using namespace std;
#define LL long long
#define MAXN 100005
LL n,m,k,ans,d;
LL p[MAXN];
int main()
{
	scanf("%I64d%I64d%I64d%I64d",&n,&m,&k,&p[1]);
	LL x=(p[1]-1)/k*k;
	p[1]-=x;
	for(int i=2;i<=m;i++)
		scanf("%I64d",&p[i]),p[i]-=x;
	LL r=k;
	for(int i=1;i<=m;i++)
	{
		if(p[i]>r)
		{	
			x=(p[i]-r-1)/k+1;
			r+=x*k;
		}
		ans++,d++;
		for(int j=i+1;j<=m;j++)
			if(p[j]<=r)
			{
				d++;
				i=j;
			}
			else
			{
				r+=d;
				d=0;
				i=j-1;
				break;
			}
	}
	printf("%I64d",ans);
}