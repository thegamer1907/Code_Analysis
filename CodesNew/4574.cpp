#include <bits/stdc++.h>
using namespace std;
int n,mid,i,j,k,l,sh[1000001];
int main()
{
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	  scanf("%d",&sh[i]);
	sort(sh+1,sh+1+n);
	mid=1;
	for (i=1;i<=n;i++)
	{
		if (sh[mid]*2<=sh[i])
		  mid++;
	}
	mid--;
	mid=min(mid,n/2);
	printf("%d\n",n-mid);
}