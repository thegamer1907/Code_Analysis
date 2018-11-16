#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

typedef long long LL;

const LL MOD=1e9+7;

LL memo[2005][2005];
int n,k;

LL dp(int id, int cur)
{
	if(id>k) return 1;
	if(memo[id][cur]!=-1) return memo[id][cur];
	LL ret=0LL;
	for(int i=cur;i<=n;i+=cur)
	{
		ret+=dp(id+1,i);
		ret%=MOD;
	}
	return memo[id][cur]=ret;
}

int main()
{
	memset(memo,-1,sizeof(memo));
	scanf("%d%d",&n,&k);
	LL ans=dp(1,1);
	printf("%lld\n",ans);
	return 0;
}
