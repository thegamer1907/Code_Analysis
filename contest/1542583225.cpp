#include <bits/stdc++.h>
using namespace std;
#define gc getchar()
inline int read()
{
	int x=0;char c=gc;
	for(;c<48||c>57;c=gc);
	for(;c>47&&c<58;c=gc)
		x*=10,x+=c-48;
	return x;
}

int n,k,a[100050],b[100];

inline void init()
{
	n=read();k=read();
	for(int i=1;i<=n;++i)
	{
		for(int j=0;j<k;++j)
		{
			a[i]<<=1;
			a[i]|=read();
		}
		b[a[i]]=1;
	}
}

inline void solve()
{
	int m=1<<k;
	for(int i=1;i<=n;++i)
	{
		for(int j=0;j<m;++j)
			if(b[j]&&((a[i]&j)==0))
			{
				puts("YES");
				return;
			}
	}
	puts("NO");
}

int main()
{
	init();
	solve();
	return 0;
}