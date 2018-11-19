#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[40];
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		int o,p=1;
		for(int j=0;j<k;j++)
		{
			scanf("%d",&o);
			if(o)
				a[i]+=p;
			p<<=1;
		}
		b[a[i]]=1;
	}
	for(int i=0;i<(1<<k);i++)
		for(int j=0;j<(1<<k);j++)
			if(!(i&j)&&b[i]&&b[j])
			{
				printf("YES\n");
				return 0;
			}
	printf("NO\n");
	return 0;
}
