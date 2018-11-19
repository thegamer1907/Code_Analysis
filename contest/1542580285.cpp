#include <bits/stdc++.h>
using namespace std;
int n,m;
bool b[200001];
int a[200001];
int main()
{
	scanf("%d%d",&n,&m);
	int N=0;
	for(int i=1;i<=n;i++)
	{
		int y=0,x;
		for(int j=1;j<=m;j++)
			scanf("%d",&x),y=y*2+x;
		if(!b[y])
		{
			b[y]=1;
			a[++N]=y;
		}
	}
	for(int i=1;i<=N;i++)
		for(int j=i;j<=N;j++)
		if((a[i]&a[j])==0)
		{
			puts("YES");
			return 0;
		}
	puts("NO");
	return 0;
}