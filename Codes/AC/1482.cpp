#include <cstdio>
#include <algorithm>
using namespace std;

int ans[100010];
int cost[100010];
long long tmp[100010];
int ret;
int S,n;
int lo;
unsigned long long sum;

void Try(int l,int r)
{
	if(l >= r)
	{
		
		return ;
	}

	

	ret=(l+r)/2;
	
	
	
	sum=0;
	
	for(int i=1;i<=n;i++)
		tmp[i]=cost[i]+i*ret;

	sort(tmp+1,tmp+1+n);

	for(int i=1;i<=ret;i++)
	{
		sum+=tmp[i];
		if(sum > S)
			break;
	}

	if(sum == S)
	{
		ans[ret]=1;
		lo=ret;
		return;
	}
	if(sum < S)
	{
		ans[ret]=1;
		Try(ret+1,r);
	}

	if(ans[n] == 1)
	{
		lo=n;
		return ;
	}
	if(ans[ret] == 1 && ans[ret+1] == -1)
	{
		lo=ret;
		return ;
	}
	if(sum > S)
	{
		ans[ret]=-1;
		Try(l,ret);
	}
}

int main()
{
	scanf("%d %d",&n,&S);
	for(int i=1;i<=n;i++)
		scanf("%d",cost+i);
	//sort(cost+1,cost+n+1);
	Try(0,n+1);
	printf("%d %I64d",lo,sum);
	//printf("%d %d\n",ans[1206],ans[1207] );
	return 0;
}