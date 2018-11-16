#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int ans,n,h,x;
int main()
{
	scanf("%d%d",&n,&h); ans=n;
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if (x>h) ans++;
	}
    printf("%d",ans);
return 0;
}