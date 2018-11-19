#include<bits/stdc++.h>
using namespace std;
int a[20];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i)
	{
		int res=0;
		for(int j=1;j<=m;++j)
		{
			int x;
			scanf("%d",&x);
			res+=x<<j-1;
		}
		a[res]++;
	}
	for(int i=0;i<=15;++i)
	for(int j=0;j<=15;++j)
	{
		if(a[i]&&a[j])
		{
			if((i&j)==0)
			{
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
}