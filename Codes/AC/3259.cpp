#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int a[100005];
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		rep(i,1,n)scanf("%d",&a[i]);
		int now=0x3fffffff;
		rep(i,1,n)now=min(now,a[i]);
		int pos=now%n+1;
		while(a[pos]-now>0)
		{
			now++;
			pos++;
			if(pos>n)pos=1;
		}
		printf("%d\n",pos);
	}
	return 0;
}
