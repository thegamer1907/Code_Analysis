#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,t,ans=1,x,i,a[3000005];
	bool u=0;
	scanf("%d %d",&n,&t);
	for (i=1;i<=n;i++)
	    scanf("%d ",&a[i]);
	for (i=1;i<=n;i++)
		{
			ans+=a[ans];
			if (ans==t)
				u=1;
		}
	if (u) printf("YES");
	else printf("NO");
}