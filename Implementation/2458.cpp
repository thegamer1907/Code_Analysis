#include<bits/stdc++.h>

using namespace std;

long ans,now;
int n,p,m;

int main()
{
	scanf("%d",&n);
	for(long i=1;i<=n;i++)
	{
		scanf("%d%d",&p,&m);
		now=now-p+m;
		ans=max(ans,now);
		
	}
	printf("%ld\n",ans);
	
	
	return 0;
}