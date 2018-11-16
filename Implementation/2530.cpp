#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,h,x,ans;
	ans=0;
	scanf("%d%d",&n,&h);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x>h)
			ans++;
	}
	ans+=n;
	printf("%d\n",ans);
	
	return 0;
}