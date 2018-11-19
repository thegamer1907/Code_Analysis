#include <bits/stdc++.h>
using namespace std;

int n,a[256],b[256];
char x,y,x2,y2;

inline void init()
{
	cin>>x>>y>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>x2>>y2;
		if(x2==x&&y2==y)
		{
			puts("YES");
			return;
		}
		a[x2]=1;b[y2]=1;
	}
	if(b[x]&&a[y])puts("YES");
	else puts("NO");
}

inline void solve()
{
	
}

int main()
{
	init();
	solve();
	return 0;
}