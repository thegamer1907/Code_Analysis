#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
priority_queue<int> qq;
int a[100010];
int main()
{
	int i,j,k,l,m,n,r;
	int tmp1,tmp2,tmp3;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	l=0;r=n;
	while(l<=r)
	{
		tmp2=0;
		
		int mid=(l+r)>>1;
		//printf("%d %lld %lld %lld\n",q.empty(),l,r,mid);
		
	//	printf("%d %lld %lld %lld\n",qq.empty(),l,r,mid);
		//for(i=1;i<=n;i++)
		//	printf("%lld\n",a[i]+i*mid);
		for(i=1;i<=n;i++)
			qq.push(-(a[i]+i*mid));	
		//printf("%d\n",qq.size());
		for(i=1;i<=mid;i++)
		{
			tmp1=qq.top();
			qq.pop();
			tmp2+=(-tmp1);
			if(tmp2>m)break;
		}
	//	printf("%d\n",qq.size());
		if(tmp2<=m)l=mid+1,tmp3=tmp2;
		else 
		{
			if(r==mid)break;
			else r=mid;
		}
		//printf("%d\n",qq.size());
		while(!qq.empty())qq.pop();
	}
	printf("%d %d\n",l-1,tmp3);
	return 0;
}
