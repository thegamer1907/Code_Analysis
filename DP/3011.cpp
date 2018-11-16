#include <cstdio>
#include <algorithm>

using namespace std;

char c1[1200000],c2[1200000];
int i,n,t;

int main()
{
	scanf("%d",&n);
	getchar();
	for (i=1;i<=n;i++)
		c1[i]=getchar()-48;
	getchar();
	for (i=1;i<=n;i++)
		c2[i]=getchar()-48;
	for (i=1;i<n;i++)
		if ((c1[i]^c2[i]) && (c1[i]^c1[i+1]) && (c2[i]^c2[i+1]))
			swap(c1[i],c1[i+1]),t++;
	for (i=1;i<=n;i++)
		if (c1[i]^c2[i])
			t++;
	printf("%d",t);
	return 0;
}